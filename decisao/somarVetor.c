#include <stdio.h>
#include <stdlib.h>

int main()
{
    int listNum[100];
    int cont, result;

    printf("Quantos numeros voce quer somar? (limitado a 100 numeros)");
    scanf(" %d", &cont);

    for (int i = 0; i < cont; i++){
        printf("\nInsira um valor: ");
        scanf(" %d", &listNum[i]);
    }

    result = soma(listNum[cont]);
    
    printf("\nResultado: %d", result);
}

int soma(int x[y])
{
    int list[cont] = x[y];
    int soma = 0;

    for (int i = 0; i < cont; i++)
    {
        soma=+list[i];
        printf("soma: %d", soma);
    }
    
}