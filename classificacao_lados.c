#include <stdio.h>

int main(){
    float lado1, lado2, lado3;

    printf("Digite o valor do lado1 do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite o valor do lado2 do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite o valor do lado3 do triangulo: ");
    scanf("%f", &lado3);

    if (
        lado1 + lado2 <= lado3 || 
        lado1 + lado3 <= lado2 || 
        lado2 + lado3 <= lado1
    ){
        printf("Triangulo nao existe. Informe outros valores\n");
        return 0;
    }

    if (lado1 == lado2 && lado1 == lado3){
        printf("Seu triangulo e equilatero\n");
    } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("Seu triangulo e escaleno\n");
    } else {
        printf("Seu triangulo e isosceles\n");
    }

    return 0;
}