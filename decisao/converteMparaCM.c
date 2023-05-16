#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Construa um programa que converta metros para centímetros.

    float metros, centimetros;
    
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    
    centimetros = Convercao(metros);
    
    printf("%.2f metros equivalem a %.2f centimetros.", metros, centimetros);
}

int Convercao(metros){
    return metros * 100;
}