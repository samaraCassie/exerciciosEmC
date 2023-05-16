#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result, num, num2;

    printf("\nInsira um valor inteiro: ");
    scanf(" %d", &num);
    printf("\nInsira um valor inteiro: ");
    scanf(" %d", &num2);

    result = soma(num, num2);
    printf("Resultado: %d", result);
}

int Soma(int x, int y){
    return x + y;
}