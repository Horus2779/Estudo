int lerNumero () {
    int num1,num2,res;
    printf("Digite o primeiro numero:");
    scanf("%d",&num1);
    printf("Digite o segundo numero:");
    scanf("%d",&num2);
    if(num1>num2) {
        res=num1;
    }else {
        res=num2;
    }
    return res;
}
int lerNumero();
int main (void) {
    int res;
    res=lerNumero();
    printf("Resultado:%d\n",res);
    return 0;
}
