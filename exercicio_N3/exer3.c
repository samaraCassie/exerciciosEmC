#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que possua um vetor denominado A que 
armazene 6 números inteiros e valores iniciais {1,2,3,4,5,6}. 
O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores 
das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 1, atribuindo a esta posição o valor 10.
(d) Leia (scanf) novos valores para A nas posições 3 e 4 e mostre na tela 
cada valor do vetor A (ou seja, todo o vetor A), um em cada linha, utilizando FOR.
(e) Mostre na tela os números de posições pares e zero, de forma inversa (i == 4,2 e 0) c/ FOR
(f) Faça a divisão do elemento da última posição pela primeira posição do vetor A.
(g) Faça a subtração de todos os elementos do vetor com DO WHILE()
*/
int main(){
    int A[6]={1,2,3,4,5,6}, sum=0;

    A[0]=1;
    A[1]=0;
    A[2]=-5;
    A[3]=-2;
    A[4]=-5;
    A[5]=7;

    sum=A[0]+A[1]+A[5];

    A[0]=10;

    printf("Insira um valor para as posições 3 e 4 do vetor\n");
    scanf("%d %d", A[3], A[4]);
    printf("%d\n%d\n", A[3], A[4]);

    printf("Vetor A Completo: [");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", A[i]);
    }
    printf("]");
    
    
}