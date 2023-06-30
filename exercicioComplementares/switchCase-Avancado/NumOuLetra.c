#include <stdio.h>

int main() {
    /**
     * Faça um programa em C que leia
     * um caractere e verifique se é 
     * uma letra maiúscula, minúscula 
     * ou um número, utilizando a 
     * estrutura switch-case.
     * 
     * @samaraCassie
     */
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int ascii = (int)caractere;

    switch (ascii) {
        case 48 ... 57:  // Faixa de 0 a 9
            printf("O caractere digitado eh um numero.\n");
            break;
        case 65 ... 90:  // Faixa de A a Z
        case 97 ... 122: // Faixa de a a z
            printf("O caractere digitado eh uma letra.\n");
            break;
        default:
            printf("O caractere digitado eh um caractere nao reconhecido.\n");
            break;
    }

    return 0;
}
