#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7){
        printf("Aprovado com media %.2f\n", media);
    } else {
        printf("Reprovado com media %.2f\n", media);
    }

    return 0;
}