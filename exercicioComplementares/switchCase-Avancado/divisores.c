#include <stdio.h>

int main()
{
    /**Faça um programa que leia
     *  um número inteiro e informe
     * se ele é divisível por 2, 3, 
     * 5 ou 7, utilizando a estrutura 
     * switch-case.
     * 
     * @samaraCassie
     */
    
    int num;

    printf("Insira um numero inteiro:\n");
    scanf("%d", &num);

    switch (num % 2){
    case 0:
        printf("%d eh divisivel por 2.\n", num);
        break;
    default:
        switch (num % 3){
        case 0:
            printf("%d eh divisivel por 3.\n", num);
            break;
        default:
            switch (num % 5){
            case 0:
                printf("O numero eh divisivel por 5.\n");
                break;
            default:
                switch (num % 7){
                case 0:
                    printf("O numero eh divisivel por 7.\n");
                    break;
                default:
                    printf("O numero nao eh divisivel por 2, 3, 5 ou 7.\n");
                    break;
                }
                break;
            }
            break;
        }
        break;
    }

    return 0;
}
