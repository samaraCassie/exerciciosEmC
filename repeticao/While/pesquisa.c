#include <stdio.h>
#include <stdlib.h>

int main()
{
    //idade; sexo; salario
    // media salario homi e muié
    //maior e menor idade
    // encerrar idade negativa

    int cont, id;
    float salario, somaM = 0, somaF = 0;
    char sexo;
    //fim = id < 0;

    printf("\n---------------------------Pesquisa---------------------------\n\n Estamos coletando dados a respeito de todos os habitantes de nossa regiao.\n Por favor preencha os campos de acordo com o que eh pedido a seguir:\n\n");

    while(id>=0){

        printf("Idade:");
        scanf(" %d", &id); 

        for (cont = 0; cont < (id > 0); cont++)
        {
            printf("salario:");
            scanf("%f", &salario);

            //soma+=salario;
            //printf("%.2f\n", soma);

            printf("Sexo:\n [F] = Feminino\n [M] = Masculino\n");
            scanf(" %c", &sexo);            
        }
        switch (sexo)
        {
        case 'F':
            somaF+=cont;
            break;
        case 'f':
            somaF+=cont;
            break;
        case 'M':
            somaM+=cont;
            break;
        case 'm':
            somaM+=cont;
            break;
        default:
            break;
        }
    somaF/=cont;
    printf("Media salarial feminina: %.2f\n", somaF);
    somaM/=cont;
    printf("Media salarial masculina: %.2f\n", somaM);
    }    
}
