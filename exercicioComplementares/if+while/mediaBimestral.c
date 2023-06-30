#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3nota cada aluno
    // media 7
    // repetir se sim

    float n1, n2, n3, media;
    char escolha = 's';

    while(escolha == 's' || escolha == 'S'){

        printf("Quais as tres notas do estudante?\n");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1+n2+n3)/3;
        if(media==10)
        {
            printf("Aprovado(a) com Distinção!\n Media: %.1f\n", media);
        }
        else if(media>=7 && media<10)
        {
            printf("Aprovado(a)\n Media: %.1f\n", media);
        }
        else if(media<7 && media>=0)
        {
            printf("Reprovado(a)\n Media: %.1f\n\n", media);
        }
        else
        {
            printf("Erro\n");
        }
        
        printf("Deseja verificar a media de outro discente?\n [s] SIM \n [n] NAO\n");
        scanf(" %c", &escolha);

        if(escolha == 'n' || escolha == 'N')
        {
            printf("Fim de Sessao");
        }
        else if(escolha != 's' || escolha != 'S')
        {   
            while(escolha != 'S' && escolha != 's')
            {
                printf("Escolha 'n' para encerrar a sessao, ou 's' para verificar outra media\n");
                scanf(" %c", &escolha);
            }
        }
    }
}
