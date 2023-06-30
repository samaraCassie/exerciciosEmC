#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Faça um programa que pergunte em que 
    turno você estuda. Peça para digitar 
    M-matutino ou V-Vespertino ou N-Noturno. 
    Imprima a mensagem Bom Dia!, Boa Tarde! 
    ou Boa Noite! ou Valor Inválido!, 
    conforme o caso.
    */
    char turno;    
    printf("\n[M] Matutino\n[V] Vespertino\n[N] Noturno\n");
    printf("Digite que turno você estuda?\n");
    scanf("%d",  &turno);
    switch  (turno) {
    case 'm':
        printf("Bom Dia!");
        break;
    case 'M':
        printf("Bom Dia!");
        break;
    case 'v':
        printf("Boa Tarde!");
        break;
    case 'V':
        printf("Boa Tarde!");
        break;
    case 'n':
        printf("Boa Noite!");
        break;
    case 'N':
        printf("Boa Noite!");
        break;
    default:
        printf("Invalido");
        break;
    }
}