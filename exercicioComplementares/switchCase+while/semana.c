#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Faça um programa que leia um número 
    e exiba o dia correspondente da semana. 
    (1-Domingo, 2- Segunda, etc.), se digitar 
    outro valor deve aparecer valor inválido.

    @samaraCassie
    */
    int dia;
    char opcao = 's';
    while (opcao == 's' || opcao == 'S')
    {
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
    printf("\nDeseja Repetir?\n");
    printf("\t [N] Nao \n\t [S] Sim\n");
    scanf("%c", opcao);
    }
}