#include <stdio.h>
#include <stdlib.h>
#define qnt 5

int main(){

    int indice, i, vetor[qnt];

    
    printf("Armazene %d valor no vetor\n", qnt);
    for (i = 0; i < qnt; i++){
        scanf("%d", &vetor[i]);
    }

    while(indice>=0)
    {
        printf("\nEscolha o indice do valor que deseja consultar: ");
        scanf("%d", &indice);
        if (indice<0 || indice>=qnt){
            printf("X X X\nIndice invalido\n\n");
        }
        else{
            printf("Valor armazenato: %d\n\n", vetor[indice]);
        }
        
    }
}