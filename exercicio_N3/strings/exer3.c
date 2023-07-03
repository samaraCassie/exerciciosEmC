#include <stdio.h>

#define SIZE 7

/**
 * @samaraCassie
 * 
 * Faça um programa que possua um vetor de caracteres 
 * (aka. String) com 7 posições e valor inicial a 
 * palavra “OLA”. 
 * O programa deve executar os seguintes passos:
 */

//(b) Mostre na tela a palavra/vetor, utilizando WHILE() para imprimir letra por letra da palavra
void printString(char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

//(c) Converta a palavra para maiúsculo utilizando valores TABELA ASCII
void convertToUppercase(char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') string[i] = string[i] - 32;
        i++;
    }
    printString(string);
}

//(d) Substitua as letras ‘A’ pelo número 4 e “I’ pelo número 1
void replaceLetters(char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == 'A') string[i] = '4';
        else if (string[i] == 'I') string[i] = '1';
        i++;
    }
    printString(string);
}

//(f) Calcule o tamanho preenchido do Vetor (Tamanho da palavra), percorrendo-a com FOR
int calculateStringLength(char string[]) {
    int sizeString = 0;
    for (int i = 0; string[i] != '\0'; i++) sizeString++;
    return sizeString;
}

//(e) Exclua a última letra da palavra, utilizando caractere terminador (identifica o final da String)
void removeLastLetter(char string[]) {
    int sizeString = calculateStringLength(string);
    if (sizeString > 0) string[sizeString - 1] = '\0';
}

//(g) Leia (scanf) duas letras juntas (ex: “R4” em “BR4S1L”) e informe se encontrou ou não
int searchLetters(char string[], char letters[]) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == letters[0] && string[i + 1] == letters[1]) return 1;
        i++;
    }
    return 0;
}

int main() {
    char string[SIZE] = "OLA";

    //(a) Atribua manualmente um a um estes valores ao vetor: ‘b’, ‘r’, ‘a’, ‘s’, ‘i’, ‘l’,’\0’.
    string[0] = 'b';
    string[1] = 'r';
    string[2] = 'a';
    string[3] = 's';
    string[4] = 'i';
    string[5] = 'l';
    string[6] = '\0';

    printf("Palavra: ");
    printString(string);

    convertToUppercase(string);
    replaceLetters(string);

    int sizeString = calculateStringLength(string);
    removeLastLetter(string);
    sizeString = calculateStringLength(string);
    printf("%s\n", string);
    printf("Tamanho da palavra: %d\n", sizeString);

    char letters[3];
    printf("Digite duas letras juntas (ex: 'R4'): ");
    scanf("%2s", letters);

    int found = searchLetters(string, letters);

    if (found) printf("As letras foram encontradas na palavra.\n");
    else printf("Letras nao encontradas na palavra.\n");

    return 0;
}
