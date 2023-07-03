#include <stdio.h>

#define MAX 100

/**
 * Criar um programa que leia uma frase em uma string S[] (use gets(), scanf([] ou fgets()).  
 * Para as questões abaixo, NÃO devem ser usada funções prontas do C.
 * 
 * @samaraCassie
**/

/**
 * Faça uma busca por uma palavra ou parte dela (sub-string) 
 * dentro da string S e retorne se encontrou ou não como 
 * resultado (mesma lógica da letra “g” da questão 3). 
 */
int searchString(char S[], char subString[]) {
    int i = 0, j = 0;
    int search = 0;

    while (S[i] != '\0') {
        if (S[i] == subString[j]) {
            j++;
            if (subString[j] == '\0') search = 1;
        } else j = 0;
        i++;
    }
    return search;
}

/**Calcule e exiba o tamanho/quantidade 
 * de caracteres da frase/String (mesma 
 * lógica da letra “f” da questão 3).
**/

int sizeString(char S[]) {
    int sizeString = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        sizeString++;
    }
    return sizeString;
}

int compareStrings(char S1[], char S2[]) {
    int i = 0;
    while (S1[i] != '\0' && S2[i] != '\0') {
        if (S1[i] != S2[i]) {
            return 0;
        }
        i++;
    }
    if (S1[i] == '\0' && S2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

void substituiString(char S[]) {
    char newString[] = "catolica";
    int i = 0;
    while (newString[i] != '\0') {
        S[i] = newString[i];
        i++;
    }
    S[i] = '\0';
}

int main() {
    char S[MAX];
    printf("Digite uma frase: ");
    fgets(S, MAX, stdin);

    // Remover o caractere '\n' do final da string lida por fgets
    int i = 0;
    while (S[i] != '\n') {
        i++;
    }
    S[i] = '\0';

    // (a) Busca por uma palavra ou parte dela
    char subString[MAX];
    printf("Digite uma palavra ou sub-string para buscar: ");
    fgets(subString, MAX, stdin);
    int search = searchString(S, subString);
    if (search) {
        printf("A sub-string foi encontrada na frase.\n");
    } else {
        printf("A sub-string não foi encontrada na frase.\n");
    }

    // (b) Calcular e exibir o tamanho da frase
    int size = sizeString(S);
    printf("Tamanho da frase: %d\n", size);

    // (c) Comparar com uma segunda frase
    char segundaFrase[MAX];
    printf("Digite uma segunda frase para comparar: ");
    fgets(segundaFrase, MAX, stdin);
    int igual = compareStrings(S, segundaFrase);
    if (igual) {
        printf("As frases são iguais.\n");
    } else {
        printf("As frases são diferentes.\n");
    }

    // (d) Substituir a string por "catolica"
    substituiString(S);
    size = sizeString(S);
    printf("Nova frase: %s\n", S);
    printf("Tamanho da nova frase: %d\n", size);

    return 0;
}
