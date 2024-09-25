#include <stdio.h>

int suc(int n) {
    return n + 1;
}

int pred(int n) {
    return n - 1;
}

int soma(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return soma(suc(a), pred(b));
    }
}

int main() {
    int num1, num2;
    printf("Digite dois números naturais: ");
    scanf("%d %d", &num1, &num2);

    int resultado = soma(num1, num2);
    printf("A soma de %d e %d é %d\n", num1, num2, resultado);

    return 0;
}