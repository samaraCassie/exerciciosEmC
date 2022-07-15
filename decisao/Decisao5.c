#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Qual o numero do mes que vc nasceu?\n");
    scanf(" %d", &n);

    if ( n== 1){
        printf("Você eh de janeiro");
    }
    else if ( n== 2){
        printf("Você eh de fevereiro");
    }
    else if (n==3){
        printf("Você eh de marco");
    }
    else if (n==4){
        printf("Você eh de abril");
    }
    else if (n==5){
        printf("Você eh de maio");
    }
    else if(n==6){
        printf("Você eh de junho");
    }
    else if (n==7){
        printf("Você eh de julho");
    }
    else if (n==8){
        printf("Você eh de agosto");
    }
    else if (n==9){
        printf("Você eh de setembro");
    }
    else if (n==10){
        printf("Você eh de outubro");
    }
    else if (n==11){
        printf("Você eh de novembro");
    }
    else if (n==12){
        printf("Você eh de dezembro");
    }
    else {
        printf("Esse mes nao exite!! Acho q vc n nasceu...");
    }
}