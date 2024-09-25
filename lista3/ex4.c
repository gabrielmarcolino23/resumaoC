#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + produto(a, b - 1);
    }
}

int main() {
    int num1, num2;
    printf("Digite dois números naturais: ");
    scanf("%d %d", &num1, &num2);

    int resultado = produto(num1, num2);
    printf("O produto de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}