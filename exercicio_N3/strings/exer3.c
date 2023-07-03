#include <stdio.h>

#define SIZE 7

int main() {
    char string[SIZE] = "OLA";

    // (a) Atribuir manualmente os valores ao vetor: 'b', 'r', 'a', 's', 'i', 'l', '\0'
    string[0] = 'b';
    string[1] = 'r';
    string[2] = 'a';
    string[3] = 's';
    string[4] = 'i';
    string[5] = 'l';
    string[6] = '\0';

    // (b) Mostrar na tela a palavra/vetor, utilizando WHILE para imprimir letra por letra da palavra
    printf("Palavra: ");

    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");

    // (c) Converter a palavra para maiúsculo utilizando valores da tabela ASCII
    i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        }
        i++;
    }

    // (d) Substituir 'A' por '4' e 'I' por '1'
    i = 0;
    while (string[i] != '\0') {
        if (string[i] == 'A') {
            string[i] = '4';
        } else if (string[i] == 'I') {
            string[i] = '1';
        }
        i++;
    }

    int sizeString = 0;
    for (i = 0; string[i] != '\0'; i++) {
        // (e) Excluir a última letra da palavra, utilizando caractere terminador (identifica o final da String)
        if(string[i + 1] == '\0') string[i]='\0';
        // (f) Calcular o tamanho preenchido do Vetor (Tamanho da palavra), percorrendo-a com FOR
        sizeString++;
    }

    printf("Palavra modificada: %s\n", string);
    printf("Tamanho da palavra: %d\n", sizeString-1);

    // (g) Leia (scanf) duas letras juntas (ex: “R4” em “BR4S1L”) e informe se encontrou ou não
    char letters[3];
    printf("Digite duas letras juntas (ex: 'R4'): ");
    scanf("%2s", letters);

    int search = 0;
    i = 0;
    while (string[i] != '\0') {
        if (string[i] == letters[0] && string[i + 1] == letters[1]) {
            search = 1;
        }
        i++;
    }

    if (search) {
        printf("As letras foram encontradas na palavra.\n");
    } else {
        printf("As letras nao foram encontradas na palavra.\n");
    }

    return 0;
}
