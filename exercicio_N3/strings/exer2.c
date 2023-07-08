#include <stdio.h>
#include <stdlib.h>

/*
Construa um algoritmo que leia um vetor de 10 caracteres, 
e diga quantas consoantes foram lidas. Imprima as consoantes.

@samaraCassie
*/

int main(){
    
    int soma=0; 
    char vetor[10] = {'d', 'o', 'g', 'u', 'i', 'n', 'h', 'o', 's', '\0'};

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] != '\0'){
            if (vetor[i]>'a' && vetor[i]<'z'){
                if (vetor[i]!= 'a' && vetor[i]!= 'e' && vetor[i]!= 'i' && vetor[i]!= 'o' && vetor[i]!= 'u'){
                    soma++;
                    printf("consoantes: %c\n", vetor[i]);
                }
            }
        }
    }
    printf("Qnt de consoantes: %d", soma);
}