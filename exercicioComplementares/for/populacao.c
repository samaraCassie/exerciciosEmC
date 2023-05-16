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


    int num, maior, menor;

    printf("Insira 10 numeros inteiros.\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &num); 
        if (i == 0){
            maior = num;
            menor = num;
        }
        else if (num > maior){
        maior = num;
        }
        else if (num < menor){
        menor = num;
        }
    }
    printf("A maior num eh: %d\n", maior);
    printf("E a menor eh: %d\n", menor);
    printf("Diferenca: %d", maior - menor);
}