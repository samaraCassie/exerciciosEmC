#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int AnalisaDado(int x)
{
    int checar;
    char tmp[20];

    while(checar != 1){
        
                checar=sscanf(tmp, "%d", &x);
            
        }
        if (checar==0){
            printf("Insira um numero inteiro\n");
        }
        else if (checar==1){
            return x;
        }
        else if (checar==EOF){
            checar = 1;
            return x;
        }
    }
    return 0;
}

int Soma(int x, int y){
    return x + y;
}

int Multiplicacao(int x, int y){
    return x * y;
}

int Subtracao(int x, int y){
    return x - y;
}

int Divisao(int x, int y){
    return x / y;
}


int main()
{
    /*
    Faça um programa que implemente uma 
    calculadora simples. O programa deve 
    solicitar os operandos e o operador e 
    mostrar a entrada e o resultado. 
    Inclua verificadores de erro para 
    operadores inválidos e tentativa de 
    divisão por zero.
    
    @samaraCassie
    */
    int result, num, num2, opcao=0;
    while (opcao != 5){
        printf("[ 1 ] Adicao\n");
        printf("[ 2 ] Subtracao\n");
        printf("[ 3 ] Multiplicacao\n");
        printf("[ 4 ] Divisao\n");
        printf("[ 5 ] Fim\n");
        opcao = AnalisaDado(opcao);
        

        if (opcao == 5){
            return 0;
        }
        else{
            printf("\nInsira um valor inteiro: ");
            num = AnalisaDado(num);
            printf("\nInsira um valor inteiro: ");
            num2 = AnalisaDado(num2);
            switch (opcao)
            {
            case 1:
                result = Soma(num, num2);
                printf("Resultado: %d\n", result);
                break;
            case 2:
                result = Subtracao(num, num2);
                printf("Resultado: %d\n", result);
                break;
            case 3:
                result = Multiplicacao(num, num2);
                printf("Resultado: %d\n", result);
                break;
            case 4:
                    if (num == 0 && num2 == 0){
                        printf("Não tente dividir por 0");
                    }
                    else{
                        result = Divisao(num, num2);
                        printf("Resultado: %d\n", result);
                    }
                    
                break;
            default:
                break;
            }
        }
    }
}
