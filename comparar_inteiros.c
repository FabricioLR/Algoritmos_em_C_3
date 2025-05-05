#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite um valor de um inteiro: ");
    scanf("%d", &num1);
    printf("Digite um valor de um outro inteiro: ");
    scanf("%d", &num2);

    if (num1 == num2){
        printf("Os valores inteiros são iguais\n");
    } else {
        printf("Os valores inteiros sao diferentes\n");
    }

    return 0;
}