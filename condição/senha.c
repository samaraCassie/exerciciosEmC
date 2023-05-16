#include<stdio.h>
#include<stdlib.h>

int main()
{
    char senha[10], confirma[10];

    printf("Crie uma senha\n");
    fgets(senha, 10, stdin);


    printf("Faca login\n");
    fgets(confirma, 10, stdin);

    if (strcmp(senha, confirma) == 0){
        printf("Acesso liberado");
    }
    else{
        printf("Senha invalida");
    }
}