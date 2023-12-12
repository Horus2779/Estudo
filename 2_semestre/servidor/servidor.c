#undef UNICODE

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>

#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"

int __cdecl main(void) {
    WSADATA wsaData;
    int iResult;

    SOCKET ListenSocket = INVALID_SOCKET;
    SOCKET ClientSocket = INVALID_SOCKET;

    struct addrinfo *result = NULL;
    struct addrinfo hints;

    int iSendResult;
    char recvbuf[DEFAULT_BUFLEN];
    int recvbuflen = DEFAULT_BUFLEN;
    
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData); // Inicializa Winsock 
    if (iResult != 0) {
        printf("WSAStartup falhou: %d\n", iResult);
        return 1;
    }

    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags = AI_PASSIVE;

    // Descobre o endereco e a porta do servidor
    iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &result); 
    if ( iResult != 0 ) {
        printf("getaddrinfo falhou: %d\n", iResult);
        WSACleanup();
        return 2;
    }

    // Cria socket para receber as conexoes dos clientes
    ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol); // Socket (1) 
    if (ListenSocket == INVALID_SOCKET) {
        printf("Criacao do socket falhou: %ld\n", WSAGetLastError());
        freeaddrinfo(result);
        WSACleanup();
        return 3;
    }

    // Setup do socket para o protocolo TCP 
    iResult = bind( ListenSocket, result->ai_addr, (int)result->ai_addrlen); // Bind (2)
    if (iResult == SOCKET_ERROR) {
        printf("bind falhou: %d\n", WSAGetLastError());
        freeaddrinfo(result);
        closesocket(ListenSocket);
        WSACleanup();
        return 4;
    }

    freeaddrinfo(result);

    iResult = listen(ListenSocket, SOMAXCONN);  // Listen (3)
    if (iResult == SOCKET_ERROR) {
        printf("Espera por conexao falhou: %d\n", WSAGetLastError());
        closesocket(ListenSocket);
        WSACleanup();
        return 5;
    }

    printf("\nServidor aguardando conexoes...\n");  // Accept (4)
    ClientSocket = accept(ListenSocket, NULL, NULL);
    if (ClientSocket == INVALID_SOCKET) {
        printf("Conexao falhou: %d\n", WSAGetLastError());
        closesocket(ListenSocket);
        WSACleanup();
        return 6;
    }

    closesocket(ListenSocket); // Fecha o server socket
    
    // Recebe dados ate o cliente fechar a conexao
    do {
        iResult = recv(ClientSocket, recvbuf, recvbuflen, 0);    // Loop [ Recv (5) - Send (6) ]
        if (iResult > 0) {
            printf("Bytes recebidos: %d\n", iResult);

            printf("\nRecebido: [%s] \n\n", recvbuf);

            // Envia texto recebido de volta para o cliente
            iSendResult = send( ClientSocket, recvbuf, iResult, 0 );
            if (iSendResult == SOCKET_ERROR) {
                printf("Falha de envio: %d\n", WSAGetLastError());
                closesocket(ClientSocket);
                WSACleanup();
                return 1;
            }
            printf("Bytes enviados: %d\n", iSendResult);
        }
        else if (iResult > 0)
            printf("Fechando conexao...\n");
        else  {
            printf("Recebimento com erro: %d\n", WSAGetLastError());
            closesocket(ClientSocket);
            WSACleanup();
            return 7;
        }

    } while (iResult != 0);

    // Fecha a conexao com o cliente
    iResult = shutdown(ClientSocket, SD_SEND);
    if (iResult == SOCKET_ERROR) {
        printf("shutdown failed with error: %d\n", WSAGetLastError());
        closesocket(ClientSocket);
        WSACleanup();
        return 8;
    }

    closesocket(ClientSocket);  // Close (7)
    WSACleanup();

    return 0;
}

