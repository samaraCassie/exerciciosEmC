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
int searchSubstring(char string[], char substring[]) {
    int i = 0, j = 0;
    int found = 0;

    while (string[i] != '\0') {
        if (string[i] == substring[j]) {
            j++;
            if (substring[j] == '\0') {
                found = 1;
                break;
            }
        } else {
            j = 0;
        }
        i++;
    }
    return found;
}

/**Calcule e exiba o tamanho/quantidade 
 * de caracteres da frase/String (mesma 
 * lógica da letra “f” da questão 3).
**/
int calculateStringLength(char S[]) {
    int lengthString = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        lengthString++;
    }
    return lengthString;
}

//Informe uma segunda frase e faça a comparação se a frase é igual à frase contida na string S.
int compareStrings(char string1[], char string2[]) {
    int i = 0;
    while (string1[i] != '\0' || string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            return 0;
        }
        i++;
    }
    if (string1[i] == '\0' && string2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

/**
 * Substitua o valor da string S por “catolica” 
 * (não fucionará S = “catolica”, então deverá 
 * substituir letra a letra através e adicionar 
 * ‘\0’ ao final. Após, testar o tamanho da nova 
 * string com a lógica da letra “b”.
**/
void replaceString(char S[]) {
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
    scanf("%s", &S[MAX]);

    // (a) Busca por uma palavra ou parte dela
    char subString[MAX];
    printf("Digite uma palavra ou sub-string para buscar: ");
    scanf("%s", &subString[MAX]);
    int search = searchSubstring(S, subString);
    if (search) {
        printf("A sub-string foi encontrada na frase.\n");
    } else {
        printf("A sub-string não foi encontrada na frase.\n");
    }

    // (b) Calcular e exibir o tamanho da frase
    int length = calculateStringLength(S);
    printf("Tamanho da frase: %d\n", length);

    // (c) Comparar com uma segunda frase
    char segundaFrase[MAX];
    printf("Digite uma segunda frase para comparar: ");
    scanf("%s", &segundaFrase[MAX]);
    int result = compareStrings(S, segundaFrase);
    if (result) {
        printf("As frases sao iguais.\n");
    } else {
        printf("As frases sao diferentes.\n");
    }

    // (d) Substituir a string por "catolica"
    replaceString(S);
    length = calculateStringLength(S);
    printf("Nova frase: %s\n", S);
    printf("Tamanho da nova frase: %d\n", length);

    return 0;
}
