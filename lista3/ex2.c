#include <stdio.h>

int calcularResto(int dividendo, int divisor) {
    if (dividendo < divisor) {
        return dividendo;
    }
    return calcularResto(dividendo - divisor, divisor);
}

int main() {
    int dividendo, divisor, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    resto = calcularResto(dividendo, divisor);

    printf("O calcularRestoda divisao de %d por %d e: %d\n", dividendo, divisor, resto);

    return 0;
}