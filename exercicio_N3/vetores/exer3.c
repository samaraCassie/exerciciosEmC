#include <stdio.h>

/*
Faça um programa que possua um vetor denominado A que 
armazene 6 números inteiros e valores iniciais {1,2,3,4,5,6}. 
O programa deve executar os seguintes passos:




@samaraCassie
*/
//(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
void updateArray(int A[]) {
    printf("Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7\n");
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
}

//(b) Armazene em uma variável inteira (simples) a soma entre os valores 
//das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
int calculateSum(int A[]) {
    return A[0] + A[1] + A[5];
}

//(c) Modifique o vetor na posição 1, atribuindo a esta posição o valor 10.
void modifyArray(int A[]) {
    printf("\nModifique o vetor na posicao 1, atribuindo a esta posicao o valor 10\n");
    A[0] = 10;
}

//(d) Leia (scanf) novos valores para A nas posições 3 e 4
void readValues(int A[]) {
    printf("Insira um valor para as posicoes 3(A[2]) e 4(A[3]) do vetor\n");
    scanf("%d", &A[2]);
    scanf("%d", &A[3]);
}


//mostre na tela cada valor do vetor A (ou seja, todo o vetor A), um em cada linha, utilizando FOR.
void printArray(int A[]) {
    printf("\nVetor A:\n");
    for (int i = 0; i < 6; i++) {
        printf("Posicao [%d]: %d\n", i + 1, A[i]);
    }
    printf("\n\n");
}

//(e) Mostre na tela os números de posições pares e zero, de forma inversa (i == 4,2 e 0) c/ FOR
void printPairReversed(int A[]) {
    printf("Os numeros de posicoes pares e zero, de forma inversa: [ ");
    for (int i = 4; i >= 0; i -= 2) {
        printf("%d ", A[i]);
    }
    printf("]\n");
}

//(f) Faça a divisão do elemento da última posição pela primeira posição do vetor A.
float divideElements(int A[]) {
    return (float)A[5] / A[0];
}

//Faça a subtração de todos os elementos do vetor com DO WHILE()
void subtractArray(int A[]) {
    int subtraction = 0;
    int i = 0;
    do {
        subtraction -= A[i];
        printf("%d\n", subtraction);
        i++;
    } while (i < 6);
    printf("Resultado final: %d", subtraction);
}

int main(){
    int A[6]={1,2,3,4,5,6};
    printArray(A);

    updateArray(A);
    printArray(A);

    int sum = calculateSum(A);
    printf("soma entre os valores das posicoes A[0], A[1] e A[5] do vetor: %d\n", sum);
    
    modifyArray(A);
    printArray(A);

    readValues(A);
    printArray(A);

    printPairReversed(A);
    
    float division = divideElements(A);
    printf("Divisao do ultimo elemento pela primeira: %.2f\n", division);
    
    printf("\nsubtracao:\n");
    subtractArray(A);

    return 0;
}