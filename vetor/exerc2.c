#include <stdio.h>
#include <stdlib.h>
#define qnt 5

int main(){
    
    int i, salarios[qnt], soma=0;
    float media;
    
    for (i = 0; i < qnt; i++)
    {
        printf("Digite um salario: ");
        scanf(" %d", &salarios[i]);
        soma+=salarios[i];
    }
    media=soma/qnt;
    printf("media: %.2f\n", media);
    printf("Salarios maiores que a media:");
    for (i = 0; i < qnt; i++)
    {
        if (salarios[i] > media)
        {
            printf(" %d", salarios[i]);
        }   
    }
}