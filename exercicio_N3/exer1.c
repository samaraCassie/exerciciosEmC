#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo que leia (scanf) 
um vetor de 5 números inteiros e mostre a
soma dos números e os valores do vetor. 
(Use forma contraída para realizar a soma).

@samaraCassie
*/

int main()
{
    int vet[4], sum=0;

    for (int i = 0; i <= 4; i++){
        printf("Insira um numero inteiro\n");
        scanf("%d", &vet[i]);
        sum+=vet[i];
    }
    printf("A soma dos valores eh: %d\n", sum);
    printf("\nVetor:\n [ ");
    for(int i = 0; i <= 4; i++) printf("%d ", vet[i]); 
    printf("]");   
}