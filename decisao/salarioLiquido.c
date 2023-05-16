#include <stdio.h>

void main() {
    float salarioBruto, descontoIR, descontoINSS, descontoSindicato, descontos, salarioLiquido;
    
    printf("Digite o valor do salario bruto mensal do funcionario: R$ ");
    scanf("%f", &salarioBruto);
    
    descontoIR = 0.15 * salarioBruto;
    descontoINSS = 0.11 * salarioBruto;
    descontoSindicato = 0.03 * salarioBruto;
    descontos = descontoIR + descontoINSS + descontoSindicato;
    salarioLiquido = salarioBruto - descontos;
    
    printf("\nSalario Bruto: R$ %.2f\n", salarioBruto);
    printf("(-) IR (15%%): R$ %.2f\n", descontoIR);
    printf("(-) INSS (11%%): R$ %.2f\n", descontoINSS);
    printf("(-) Sindicato (3%%): R$ %.2f\n", descontoSindicato);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);
}


