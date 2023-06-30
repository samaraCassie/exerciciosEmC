#include <stdio.h>

void main() {
    int opcao;
    double operando1, operando2, resultado;

    printf("\nMenu da Calculadora:\n");
    printf("[ 1 ] - Adicao\n");
    printf("[ 2 ] - Subtracao\n");
    printf("[ 3 ] - Multiplicacao\n");
    printf("[ 4 ] - Divisao\n");
    printf("[ 5 ] - Fim\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    while (opcao != 5) {
       
        printf("\nDigite o primeiro operando: ");
        scanf("%lf", &operando1);

        printf("Digite o segundo operando: ");
        scanf("%lf", &operando2);

        switch (opcao) {
            case 1:
                resultado = operando1 + operando2;
                printf("\n%.2lf + %.2lf = %.2lf\n", operando1, operando2, resultado);
                break;

            case 2:
                resultado = operando1 - operando2;
                printf("\n%.2lf - %.2lf = %.2lf\n", operando1, operando2, resultado);
                break;

            case 3:
                resultado = operando1 * operando2;
                printf("\n%.2lf * %.2lf = %.2lf\n", operando1, operando2, resultado);
                break;

            case 4:
                if (operando2 != 0) {
                    resultado = operando1 / operando2;
                    printf("\n%.2lf / %.2lf = %.2lf\n", operando1, operando2, resultado);
                } else {
                    printf("\nErro: Tentativa de divisao por zero!\n");
                }
                break;

            default:
                printf("\nErro: Opcao invalida!\n");
                break;
        }

        printf("\nMenu da Calculadora:\n");
        printf("[ 1 ] - Adicao\n");
        printf("[ 2 ] - Subtracao\n");
        printf("[ 3 ] - Multiplicacao\n");
        printf("[ 4 ] - Divisao\n");
        printf("[ 5 ] - Fim\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);
    }
}
