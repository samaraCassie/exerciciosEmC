#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num;

    printf("Que tabuada vc qr consultar?\n");
    scanf("%d", &num);

    for(cont = 0; cont <= 10; cont++){
    printf("%d x %d = %d\n", num, cont, num*cont);
    }
}
