#include <stdio.h>
#include <string.h>

#define MAX 20

/**@samaraCassie
 * 
 * Criar um programa que leia uma palavra[20]  
 * com fgets(), guarde na variável palavra e 
 * imprima na tela o seguinte texto (tudo na 
 * mesma linha):
 * 
 * Saída ---->   “Palavra <palavra>  lida com fgets()”. 
**/

int main() {
    char string[MAX];
    printf("Digite uma palavra: ");
    fgets(string, MAX, stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("Saida ----> \"Palavra %s lida com fgets().\"\n", string);

    return 0;
}
