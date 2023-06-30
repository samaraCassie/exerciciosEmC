#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Faça um programa que possua um matriz 3x3 
    denominado M que armazene 9 números inteiros
     e valores iniciais {1,2,3,4,5,6,7,8,9}.
     
     O programa deve executar os seguintes passos:
     
     (a) Atribua/mude o valor para 50 na 
     linha 2, coluna 2 e para 40na quarta 
     posição da matriz M e mostre na tela.
     
     (b) Armazene em uma variável inteira 
     a soma entre os valores das posições
     A[0][1], A[1][1] e A[2][2] da matriz
     e mostre na tela esta soma.
       
     (c) Leia (scanf) novos valores para M
      nas posições 0 a 6, utilizando FOR.
      
     (d) Mostre na tela toda a matriz, no
     formato de matrizes (pulando linhas
     quando necessário) usando FOR
       
     (e) Faça a divisão do último elemento
     pelo primeiro elemento da matriz M.
        
     (f) Faça a subtração de todos os 
     elementos da matriz com WHILE()

     @samaraCassie
    */

   int matriz[3][3]={
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
   };
   int soma;

   matriz[1][1]=50;
   matriz[1][0]=40;

   soma = matriz[0][1] + matriz[1][1] + matriz[2][2];

   printf("Soma dos seguintes valores:\n A[0][1], A[1][1] e A[2][2]:%d\n", soma);

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Insira um valor: \n");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Matriz[%d][%d]: %d\t", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDivisao do ultimo elemento pelo primeiro elemento da matriz: %d\n", matriz[0][0]/matriz[3][3]);

    int i=0;
    int subtracao, tmp;
    while (i < 3){
        int j = 0;
        while (j < 3)
        {
            tmp = matriz[i][j];
            subtracao = matriz[i][j]-tmp;
            j++;
        }
        i++;        
    }

    printf("Subtracao: \n%d", subtracao);
    
}
