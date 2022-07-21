#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Escolha o numero do dia da semana em que estamos. Considerando os numeros de 1 a 7 como dias da semana (1=Domingo)\n");
    scanf("%d", &dia);
    switch (dia) {
    case 1:
        printf("Entao hoje eh Domingo");
        break;
    case 2:
        printf("Entao hoje eh segunda-feira");
        break;
    case 3:
        printf("Entao hoje eh terça-feira");
        break;
    case 4:
        printf("Entao hoje eh quarta-feira");
        break;
    case 5:
        printf("Entao hoje eh quinta-feira");
        break;
    case 6:
        printf("Entao hoje eh sexta-feira");
        break;
    case 7:
        printf("Entao hoje eh sabado");
        break;
    default:
        printf("Invalido");
        break;
    }
}