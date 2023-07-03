#include <stdio.h>

#define ROWS 3
#define COLS 3

/*@samaraCassie

1. Faça um programa que possua um matriz 3x3 denominado M que armazene 9 números inteiros e valores iniciais {1,2,3,4,5,6,7,8,9}.
O programa deve executar os seguintes passos:
*/


//(a) Atribua/mude o valor para 50 na linha 2, coluna 2 (quinto elemento) e para 40 na quarta posição da matriz M e mostre na tela.
void updateMatriz(int matriz[][COLS]) {
    matriz[1][1] = 50;
    matriz[1][0] = 40;
}

//(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições M[0][1], M[1][1] e M[2][2] da matriz e mostre na tela esta soma.
int sumPositions(int matriz[][COLS]) {
    return matriz[0][1] + matriz[1][1] + matriz[2][2];
}

//(c) Leia (scanf) novos valores para M nas posições 0 a 6, utilizando FOR.
void readMatriz(int matriz[][COLS]) {
    printf("Insira novos valores:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

//(d) Mostre na tela toda a matriz, no formato de matrizes (pulando linhas quando necessário) usando FOR 
void printMatriz(int matriz[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

//(e) Faça a divisão do último elemento pelo primeiro elemento da matriz M.
float divitionElements(int matriz[][COLS]) {
    return (float)matriz[ROWS - 1][COLS - 1] / matriz[0][0];
}

//(f) Faça a subtração de todos os elementos da matriz com WHILE()
int subtractMatriz(int matriz[][COLS]) {
    int i = 0, j = 0, subtraction=0;
    while (i < ROWS) {
        while (j < COLS) {
            subtraction -= matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return subtraction;
}

int main() {
    int matriz[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz M:\n");
    printMatriz(matriz);

    updateMatriz(matriz);

    printf("\n(a) Matriz M modificada:\n");
    printMatriz(matriz);

    int sum = sumPositions(matriz);
    printf("\n(b) Soma das posicoes M[0][1], M[1][1], e M[2][2]: %d\n", sum);

    readMatriz(matriz);

    printf("\n(c) Novos valores da matriz M:\n");
    printMatriz(matriz);

    float division = divitionElements(matriz);
    printf("\n(e) Divisao do ultimo elemento pelo primeiro: %.2f\n", division);

    printf("\n(f) Subtracao de todos os elementos da matriz M:\n");
    int result = subtractMatriz(matriz);
    printf("%d", result);

    return 0;
}
