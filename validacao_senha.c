#include <stdio.h>

int comparar(char *senha, char *_senha){
    int index = 0;

    while(senha[index] == _senha[index]){
        if (senha[index] == '\0' || _senha[index] == '\0'){
            break;
        }

        index++;
    }


    if (senha[index] == '\0' && _senha[index] == '\0'){
        return 1;
    }

    return 0;
}

int main(){
    char *senha;
    char *SENHA_PADRAO = "1234";
    
    printf("Digite sua senha: ");
    scanf("%s", senha);

    if (comparar(senha, SENHA_PADRAO)){
        printf("Senha correta\n");
    } else {
        printf("Senha incorreta\n");
    }

    return 0;
}