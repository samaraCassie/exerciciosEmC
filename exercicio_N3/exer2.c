#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo que leia um vetor de 5 
números reais e mostre-os na ordem inversa.

@samaraCassie
*/

int main()
{
    float vet[4];

    for (int i = 0; i <= 4; i++){
        printf("Insira um numero real\n");
        scanf("%f", &vet[i]);
    }
    printf("%.1f ", vet[4]); 
    printf("\nVetor Inverso:\n [ ");
    for(int i = 4; i >= 0; i--) {
        printf("%.1f ", vet[i]);
    } 
    printf("]");   
}