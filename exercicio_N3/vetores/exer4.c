#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que utilize vetores para armazenar 
as temperaturas em diferentes pontos de um ambiente, 
e calcule a temperatura média do ambiente como um todo.

@samaraCassie
*/

// Função para calcular a temperatura média
float calculateMediumTemperature(float listTemperature[], int numPontos) {
    float soma = 0;
    for (int i = 0; i < numPontos; i++) {
        soma += listTemperature[i];
    }
    return soma / numPontos;
}

int main() {
    int points;
    printf("De quantos pontos voce quer registrar a temperatura para tirar a media?");
    scanf("%d", &points);

    float listTemperature[points];
    
    // Ler as temperaturas em diferentes pontos do ambiente
    if(points == 1) printf("Digite as temperaturas dos %d pontos do ambiente:\n", points);
    else if(points > 1) printf("Digite as temperaturas dos %d pontos do ambiente:\n", points);
    else{
        printf("Nenhum local para registrar temperatura.");
        return 0;
    } 

    for (int i = 0; i < points; i++) {
        printf("Temperatura do ponto %d: ", i+1);
        scanf("%f", &listTemperature[i]);
    }

    // Calcular a temperatura média do ambiente
    float temperaturaMedia = calculateMediumTemperature(listTemperature, points);

    // Exibir a temperatura média do ambiente
    printf("A temperatura media do ambiente e: %.2f\n", temperaturaMedia);

    return 0;
}