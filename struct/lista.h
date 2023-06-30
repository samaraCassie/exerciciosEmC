#include <iostream>

using namespace std;
/*
Construa um programa que defineuma estrutura do tipo pessoa

@samaraCassie
*/

struct Person
{
    char Personme[100];
    int idade;
    
    Person *proximo;
}Person;

class fila{
    private:
        Person *inicio;
        Person *fim;

    public:
    fila();
    void ToPrint();
    void createPerson();   
   
}