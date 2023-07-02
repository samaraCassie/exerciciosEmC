#include <stdio.h>

/*
Faça um programa que possua um vetor denominado A que 
armazene 6 números inteiros e valores iniciais {1,2,3,4,5,6}. 
O programa deve executar os seguintes passos:




@samaraCassie
*/
void main(){
    int subtraction=0, i=0, A[6]={1,2,3,4,5,6};

    //(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    A[0]=1;
    A[1]=0;
    A[2]=-5;
    A[3]=-2;
    A[4]=-5;
    A[5]=7;

    //(b) Armazene em uma variável inteira (simples) a soma entre os valores 
    //das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    int sum=A[0]+A[1]+A[5];
    printf("\nsoma entre os valores das posicoes A[0], A[1] e A[5] do vetor: %d\n", sum);

    //(c) Modifique o vetor na posição 1, atribuindo a esta posição o valor 10.
    A[0]=10;

    //(d) Leia (scanf) novos valores para A nas posições 3 e 4 e mostre na tela 
    //cada valor do vetor A (ou seja, todo o vetor A), um em cada linha, utilizando FOR.
    printf("Insira um valor para as posicoes 3(A[2]) e 4(A[3]) do vetor\n");
    scanf("%d", &A[2]);
    scanf("%d", &A[3]);
    printf("A[2]=%d, A[3]=%d\n", A[2], A[3]);

    printf("Vetor A Completo: [\n");
    for (i = 0; i < 6; i++)  printf("posicao %d: [%d]\n", i+1, A[i]);
    printf("]\n\n");

    //(e) Mostre na tela os números de posições pares e zero, de forma inversa (i == 4,2 e 0) c/ FOR
    printf("Os numeros de posicoes pares e zero, de forma inversa:");
    for (i = 6; i >= 0; i-=2) printf("%d ", i);

    //(f) Faça a divisão do elemento da última posição pela primeira posição do vetor A.
    float division = (float)A[5] / A[0];
    printf("Divisao do ultimo elemento pela primeira: %.2f\n", division);

    //Faça a subtração de todos os elementos do vetor com DO WHILE()
    printf("\n\nsubtractiontracao:\n");
    i=0;
    do{
        subtraction-=A[i];
        printf("%d\n", subtraction);
        i++;
    } while (i < 6);
}