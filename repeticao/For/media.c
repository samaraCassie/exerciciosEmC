#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, qnt;
    float nota, soma=0, maior, menor;

    printf("Quantas notas vc tem para tirar a media?\n");
    scanf("%d", &qnt);
    printf("digite quais são\n");
    for(cont = 0; cont < qnt; cont++){
        scanf("%f", &nota); 
        soma+=nota;
        if (cont == 0){
            maior = nota;
            menor = nota;
        }
        else if (nota > maior){
        maior = nota;
        }
        else if (nota < menor){
        menor = nota;
        }
    }
    soma/=qnt;
    printf("Sua media eh de: %.1f\n", soma);
    printf("A maior nota eh: %.1f\n", maior);
    printf("E a menor eh: %.1f\n", menor);
}