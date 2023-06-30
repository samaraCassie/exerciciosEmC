#include <iostream>
#include "lista.h"
#include <cstddef>
#include <new> 

using namespace std;
/*
Construa um programa que defineuma estrutura do tipo pessoa

@samaraCassie
*/

void createPerson(){
    Person user;

    cout << "Insira seu nome: ";
    cin >> user.nome;

    cout <<"\n Insira sua idade: ";
    cin >> user.idade;

    cout << "| Pessoa criada com sucesso! |\n";
    cout << "+----------------------------+\n";
    cout << "+----------------------------+\n";
}

void ToPrint(){
    cout << "+----------------------------+\n";
    cout << "| Nome: %d\n", user.nome;
    cout << "| Idade: %d\n", user.idade;
    cout << "+----------------------------+\n";
}