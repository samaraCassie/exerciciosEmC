#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont;
    char algo[200];

    printf("Digite caracteres\n");
    scanf("%s", &algo);
    printf("Digite um numero\n");
    scanf("%d", &num);

    for(cont = 0; cont < num; cont++){
    printf("    %s\n", algo);
    }
}