#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*
   Faça um programa que leia dez números inteiros e 
   calcule a diferença entre o maior e o menor número
   do conjunto.

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