#include <iostream>

using namespace std;
/*
Construa um programa que defineuma estrutura do tipo pessoa

@samaraCassie
*/

void main()
{
    char opcao = -1;
    while (opcao != 'x' && opcao != 'X')
    {
        cout << "[1] Criar Pessoa\n";
        cout << "[2] Ver Pessoa\n";
        cout << "[X] Sair\n";
        cin >> opcao;

        switch (opcao)
        {
        case '1':
            break;
        
        case '2':
            break;
        default:
            break;
        }
    }
}