#include <stdio.h>

#define ROWS 3
#define COLS 3

/**@samaraCassie
 * 
 * Construa um algoritmo que leia duas matrizes 3x3 e 
 * gere uma terceira matriz com a soma dos elementos 
 * correspondentes de a e b.
**/

void sumMatrices(int A[][COLS], int B[][COLS], int C[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void readMatriz(int matriz[][COLS]) {
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void printMatriz(int matriz[][3]) {
    printf("Matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3];

    printf("Insira valores para a Matriz A:\n");
    readMatriz(A);

    printf("Insira valores para a Matriz B:\n");
    readMatriz(B);

    sumMatrices(A, B, C);

    printf("\nMatriz A:\n");
    printMatriz(A);

    printf("\nMatriz B:\n");
    printMatriz(B);

    printf("\nGerando Matriz C:\n");
    printMatriz(C);

    return 0;
}
