#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que calcule o número médio de alunos 
por turma. Para isto, peça a quantidade de turmas e a 
quantidade de alunos para cada turma. As turmas não 
podem ter mais de 40 alunos.

@samaraCassie
*/

int main()
{
    int turmas, alunos, maior, menor, i=1;
    float soma=0;

    printf("Quantas turmas tem na escola?\n");
    scanf("%d", &turmas);

    while(i <= turmas){
        printf("quantos alunos tem na turma %d: ", i);
        scanf("%d", &alunos); 

        if (alunos>40){
            printf("Uma turma não pode ter mais do que 40 alunos");
            return 0;
        }

        else {
            soma+=alunos;
            if (i == 0){
                maior = alunos;
                menor = alunos;
            }
            else if (alunos > maior){
                maior = alunos;
            }
            else if (alunos < menor){
                menor = alunos;
            }
        }
        i++;
    }
    soma/=turmas;
    printf("A media eh : %.1f\n", soma);
    printf("A maior turma tem %d alunos\n", maior);
    printf("E a menor tem %d alunos\n", menor);
    return 0;
}