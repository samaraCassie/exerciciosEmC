#include<stdio.h>
#include<stdlib.h>
#define tam 15
int main()
{
    int num, vetor[tam], cont;

    printf("Insira 15 numeros inteiros\n");
    for(cont = 0; cont < tam; cont++){
        scanf(" %d", &num);
        vetor[cont] = num;
        //printf("indice: %d\n valorVetor: %d\n", cont, vetor[cont]);
    }
    for (cont = 0; cont < tam; cont++){
        if (vetor[cont] % 2 == 0){
            printf(" %d", vetor[cont]);
    }
    }
}