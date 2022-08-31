#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite uma letrinha\n");
    scanf("%c", &letra);

    if(letra == 'a'||letra == 'e'||letra == 'i'||letra == 'o'||letra == 'u'){
        printf("Essa letra eh uma vogal\n");
    }
    else{
        printf("Essa eh uma consoante");
    }
}

