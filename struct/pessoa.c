#include <stdio.h>
#include <stdlib.h>
/*
Construa um programa que defineuma estrutura do tipo pessoa

@samaraCassie
*/

struct Person
{
    char nome[100];
    int idade;
};

void createPerson(){
    struct Person user;

    printf("Insira seu nome: ");
    scanf("%s", &user.nome);

    printf("\n Insira sua idade: ");
    scanf("%d", &user.idade);

    printf("+----------------------------+\n");
    printf("| Pessoa criada com sucesso! |\n");
    printf("+----------------------------+\n");
}

void ToPrint(){
    printf("+----------------------------+\n");
    printf("| Nome: %d\n", user.nome);
    printf("| Idade: %d\n", user.idade);
    printf("+----------------------------+\n");
}
void main()
{
    char opcao = -1;
    while (opcao != 'x' && opcao != 'X')
    {
        printf("[1] Criar Pessoa\n");
        printf("[2] Ver Pessoa\n");
        printf("[X] Sair\n");
        scanf("%c", &opcao);

        switch (opcao)
        {
        case '1':
            createPerson();
            break;
        
        case '2':

        default:
            break;
        }
    }
    

    
   
}