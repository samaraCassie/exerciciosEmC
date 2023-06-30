#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*
   6.Supondo que a população de um país A seja 
   da ordem de 80.000 habitantes com uma taxa 
   anual de crescimento de 3% e que a população 
   do país B seja, aproximadamente, de 200.000 
   habitantes com uma taxa de crescimento anual 
   de 1,5%. Fazer um programa que calcule e escreva 
   o número de anos necessários para que a população 
   do país A ultrapasse ou iguale a população do 
   país B, mantidas essas taxas de crescimento.

   @samaraCassie
   */

    int populacao_A = 80000;
    double taxa_crescimento_A = 0.03;

    int populacao_B = 200000;
    double taxa_crescimento_B = 0.015;

    int anos;

    for (anos = 0; populacao_A < populacao_B; anos++) {
        populacao_A += populacao_A * taxa_crescimento_A;
        populacao_B += populacao_B * taxa_crescimento_B;
    }

    printf("Número de anos necessários: %d\n", anos);

    return 0;
}