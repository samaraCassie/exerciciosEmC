#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra, opcao;

    do{
        printf("\nDigite uma letrinha\n");
        scanf("%c", &letra);

        if(letra == 'a'||letra == 'e'||letra == 'i'||letra == 'o'||letra == 'u') printf("'%c' eh uma vogal\n", letra);
        else printf("%c eh uma consoante\n", letra);
         
        printf("Deseja Repetir?\n");
        printf("\t [N] Nao \n\t [S] Sim");
        scanf("%c", &opcao);
    }while (opcao == 's' || opcao == 'S');
    
    
}

