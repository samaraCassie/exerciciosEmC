#include <stdio.h>
#include <stdlib.h>

int main()
{
    //idade; sexo; salario
    // media salario homi e muié
    //maior e menor idade
    // encerrar idade negativa

    int id;
    float salario, homi_salario= 0, muie_salario= 0, somaM = 0, somaF = 0;
    char sexo;
    //fim = id < 0;

    printf("\n---------------------------Pesquisa---------------------------\n\n Estamos coletando dados a respeito de todos os habitantes de nossa regiao.\n Por favor preencha os campos de acordo com o que eh pedido a seguir:\n\n");

    while(id!=0){

        printf("Idade:");
        scanf(" %d", &id);
        if(id==0)
            break;

            printf("salario:");
            scanf("%f", &salario);

            //soma+=salario;
            //printf("%.2f\n", soma);

            printf("Sexo:\n [F] = Feminino\n [M] = Masculino\n");
            scanf(" %c", &sexo);

            if(sexo=='f' || sexo=='F'){
                somaF++;
                muie_salario=muie_salario+salario;
            }

            else if(sexo=='m' || sexo=='M'){
                somaM++;
                homi_salario=homi_salario+salario;
            }
        printf("Media salarial feminina: %.2f\n", muie_salario/somaF);
        printf("Media salarial masculina: %.2f\n", homi_salario/somaM);
    }
}
