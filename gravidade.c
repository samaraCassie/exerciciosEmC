#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    int plant;
    printf("Qual seu peso?\n");
    scanf("%f", &peso);
    
    printf("Digite um numero para escolher um os seguntes planetas:\n 1=Mercurio\n 2=Venus\n 3=Marte\n 4=Jupiter\n 5=Saturno\n 6=Urano\n");
    scanf("%d", &plant);

    switch (plant)
    {
    case 1:
        peso = peso * 0.37;
        printf("Em mercurio voce pesaria %.1f", peso);
        break;
    case 2:
        peso = peso * 0.88;
        printf("Em Venus voce pesaria %.1f", peso);
        break;
    case 3:
        peso = peso * 0.38;
        printf("Em Marte voce pesaria %.1f", peso);
        break;
    case 4:
        peso = peso * 2.64;
        printf("Em Jupiter voce pesaria %.1f", peso);
        break;
    case 5:
        peso = peso * 1.15;
        printf("Em Saturno voce pesaria %.1f", peso);
        break;
    case 6:
        peso = peso * 1.17;
        printf("Em Urano voce pesaria %.1f", peso);
        break;
    
    default:
        printf("Invalido");
        break;
    }
}