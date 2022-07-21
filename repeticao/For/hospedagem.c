#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, dia, taxa;
    
    printf("Quantos dias cada cliente ficou hospedado no hotal?\n");
    for(cont = 0; cont <=10; cont ++){
        scanf("%d", &dia);
        
        if(dia<15){
            taxa=dia*4;
        }
        else if(dia == 15){
            taxa=dia*3.6;
        }
        else {
            taxa=dia*3;
        }
        dia*=50;
        taxa+=dia;
        printf("Valo total = R$%.2d\n", taxa);
        
    }
}