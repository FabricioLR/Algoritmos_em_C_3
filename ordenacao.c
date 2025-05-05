#include <stdio.h>

void ordenar(float num[3]){
    for (int index = 0; index < 3 - 1; index++){
        for (int index2 = 0; index2 < 3 - 1 - index; index2++){
            if (num[index2] > num[index2 + 1]){
                float temp = num[index2];
                num[index2] = num[index2 + 1];
                num[index2 + 1] = temp;
            }
        }
    }
}


int main(){
    float num[3];

    printf("Digite o primeiro valor: ");
    scanf("%f", &num[0]);
    printf("Digite o segundo valor: ");
    scanf("%f", &num[1]);
    printf("Digite o terceiro valor: ");
    scanf("%f", &num[2]);

    printf("Valores desordenados: ");
    for (int index = 0; index < 3; index++){
        printf("%2.f ", num[index]);
    }

    ordenar(num);

    printf("\nValores ordenados: ");
    for (int index = 0; index < 3; index++){
        printf("%2.f ", num[index]);
    }
    
    return 0;
}