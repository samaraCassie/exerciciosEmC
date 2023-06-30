#include <stdio.h>

void main() {
    /*
     * Faça um programa em C que leia uma letra maiúscula 
     * ou minúscula e informe se ela é uma vogal ou uma 
     * consoante. Se o usuário digitar um número ou outro 
     * caractere não reconhecido, o programa deve informar 
     * que a entrada é inválida, utilizando a estrutura 
     * switch-case.
     * 
     * @samaraCassie
     */
    char letra;

    printf("Digite uma letra maiuscula ou minuscula: ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("A letra digitada eh uma vogal.\n");
            break;
        default:
            printf("A letra digitada eh uma consoante.\n");
            break;
    }
}
