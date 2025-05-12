#include <stdio.h>

int main(){
    float ang1, ang2, ang3;

    printf("Digite o valor do angulo1 do triangulo: ");
    scanf("%f", &ang1);
    printf("Digite o valor do angulo2 do triangulo: ");
    scanf("%f", &ang2);
    printf("Digite o valor do angulo3 do triangulo: ");
    scanf("%f", &ang3);

    if (ang1 + ang2 + ang3 != 180){
        printf("Triangulo nao existe. Informe outros valores\n");
        return 0;
    }

    if (ang1 < 90 && ang2 < 90 && ang3 < 90){
        printf("Seu triangulo e acutangulo\n");
    } else if (ang1 == 90 || ang2 == 90 || ang3 == 90){
        printf("Seu triangulo e retangulo\n");
    } else {
        printf("Seu triangulo e obtusangulo\n");
    }

    return 0;
}