#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Faça um programa que calcule e mostre 
    a média bimestral da turma. O usuário 
    deve informar a quantidade de notas, 
    bem como cada nota.

    @samaraCassie
    */


    int cont, qnt;
    float nota, soma=0, maior, menor;

    printf("Quantas notas vc tem para tirar a media?\n");
    scanf("%d", &qnt);
    printf("digite quais são as notas\n");
    while(cont < qnt){
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
        cont++;
    }
    soma/=qnt;
    printf("Sua media eh de: %.1f\n", soma);
    printf("A maior nota eh: %.1f\n", maior);
    printf("E a menor eh: %.1f\n", menor);
}