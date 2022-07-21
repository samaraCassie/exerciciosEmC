#include <stdio.h>

int main(){

   int contador;
   float nota = 0, soma = 0, media;



     for (contador = 0; contador < 3; contador++){
         printf("Digite a nota do aluno: ");
         scanf(" %f", &nota);

            soma = soma + nota;
     }

      media = soma / 3;

        printf("A media e de: %.2f\n", media);

          if (media >= 7){
              printf("Aprovado");
          }
          else if (media < 7){
                   printf("Reprovado");
          }


}
