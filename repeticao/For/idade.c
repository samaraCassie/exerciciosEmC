#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, soma=0, maior, menor, idade;

    printf("Quais as idades dos alunos?\n");
    for(cont = 0; cont < 10; cont++){
        scanf("%d", &idade); 
        soma+=idade;
        if (cont == 0){
            maior = idade;
            menor = idade;
        }
        else if (idade > maior){
        maior = idade;
        }
        else if (idade < menor){
        menor = idade;
        }
    }
    soma/=10;
    printf("A idade media eh de: %.1d\n", soma);
    printf("A maior eh: %.1d\n", maior);
    printf("E a menor eh: %.1d\n", menor);
}