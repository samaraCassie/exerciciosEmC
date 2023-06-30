#include <stdio.h>

int main() {
    /*
    Faça um programa que verifique se a 
    letra digitada for: F ou M e imprima 
    uma mensagem: masculino, feminino ou 
    indefinido/outros.

    @samaraCassie
    */
    char letra, opcao='s';

    while (opcao == 's' || opcao == 'S') {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        if (letra == 'F' || letra == 'f') {
            printf("Feminino\n");
        } else if (letra == 'M' || letra == 'm') {
            printf("Masculino\n");
        } else {
            printf("Indefinido/Outros\n");
        }

        printf("Deseja repetir?\n\n [N] Nao\n [S] Sim\n");
        scanf(" %c", &opcao);
    }

    return 0;
}
