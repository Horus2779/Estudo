#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#pragma comment (lib, "Ws2_32.lib")  // Precisa linkar com Ws2_32.lib, Mswsock.lib, e Advapi32.lib
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"

int __cdecl main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
    WSADATA wsaData;
    SOCKET ConnectSocket = INVALID_SOCKET;
    struct addrinfo *result = NULL,
                    *ptr = NULL,
                    hints;
                    
    char *sendbuf;
    printf("Digite um texto: ");
    scanf("%[^\n]", &sendbuf);
    char recvbuf[DEFAULT_BUFLEN];
    int iResult;
    int recvbuflen = DEFAULT_BUFLEN;
    
    // Validate the parameters
    if (argc != 2) {
        printf("use: %s nome-servidor\n", argv[0]);
        return 1;
    }

    // Initializa Winsock
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (iResult != 0) {
        printf("WSAStartup failed with error: %d\n", iResult);
        return 2;
    }

    ZeroMemory( &hints, sizeof(hints) );
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;

    // Descobre endereco e porta do servidor
    iResult = getaddrinfo(argv[1], DEFAULT_PORT, &hints, &result);
    if ( iResult != 0 ) {
        printf("getaddrinfo falhou: %d\n", iResult);
        WSACleanup();
        return 3;
    }

    
    for(ptr=result; ptr != NULL ;ptr=ptr->ai_next) { // Tenta conectar
        ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol); // Cria un SOCKET (1)
        if (ConnectSocket == INVALID_SOCKET) {
            printf("Criacao do socket falhou: %ld\n", WSAGetLastError());
            WSACleanup();
            return 4;
        }

        iResult = connect( ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen); // connect (2)
        if (iResult == SOCKET_ERROR) {
            closesocket(ConnectSocket);
            ConnectSocket = INVALID_SOCKET;
            continue;
        }
        break;
        
        // Seria bom ter algum tipo de temporizador aqui para evitar sobrecarga da CPU 
    }

    freeaddrinfo(result);

    if (ConnectSocket == INVALID_SOCKET) {
        printf("Falha conectando com servidor!\n");
        WSACleanup();
        return 5;
    }

    // Send an initial buffer
    iResult = send( ConnectSocket, sendbuf, (int)strlen(sendbuf), 0 );  // Send (3)
    if (iResult == SOCKET_ERROR) {
        printf("send falhou: %d\n", WSAGetLastError());
        closesocket(ConnectSocket);
        WSACleanup();
        return 6;
    }

    printf("Bytes enviados: %ld\n", iResult);

    // Fecha conexao porque nao vai enviar mais dados
    iResult = shutdown(ConnectSocket, SD_SEND);
    if (iResult == SOCKET_ERROR) {
        printf("shutdown failed with error: %d\n", WSAGetLastError());
        closesocket(ConnectSocket);
        WSACleanup();
        return 7;
    }

    // Recebe ate servidor encerrar conexao
    do {
        iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0); // Recv (4) 
        if ( iResult > 0 ){
            printf("Bytes received: %d\n", iResult);
            printf("\nTexto recebido: [%s]\n\n", recvbuf);
        }
        else if ( iResult == 0 )
            printf("Connection closed\n");
        else
            printf("recv failed with error: %d\n", WSAGetLastError());

    } while( iResult > 0 );

    closesocket(ConnectSocket); // Close (5)
    WSACleanup();

    return 0;
}

