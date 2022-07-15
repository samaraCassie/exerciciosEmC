#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;

    printf("Quantas anos voce tem?\n");
    scanf("%d", &id);

    if(id<16)
    {
        printf("Entao vc ainda nao eh eleitor");
    }
    else if (id>=18 && id<65)
    {
        printf("Voce eh obrigado a votar");
    }
    else
    {
        printf("Para voce, votar eh opcional");
    }
}