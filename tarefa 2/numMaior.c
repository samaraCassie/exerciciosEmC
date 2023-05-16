#include <stdio.h>

void main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    if(num1 > num2) {
        printf("%d é o maior número.", num1);
    } else {
        printf("%d é o maior número.", num2);
    }
}
