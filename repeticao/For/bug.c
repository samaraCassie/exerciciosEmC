//Caçando um bug no code que o prof deu
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fim, num, i, resto, cont=0;

    printf("Digite um numero inteiro!\n");
    scanf(" %d", &fim);

    for(num=1; num<=fim; num++){
       for(i=1; i<=num; i++){
            resto = num % i;
         if (resto == 0){
            cont++;
         }
       }
        if(cont == 2){
            printf("%d primo\n", num);
       }else{
            printf("%d nao primo\n", num);
       }
       //cont=0; acheiiii hehehe
    }

}
