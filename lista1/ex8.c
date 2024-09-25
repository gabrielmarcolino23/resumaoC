#include <stdio.h>

int CalcularResto(int x) {
    return x % 3;
     
}

int main() {
    int x, resto;

    printf("Insira um valor inteiro para X: ");
    scanf("%d", &x);

    resto = CalcularResto(x);

    printf("O resto da operacao por de %d por 3 e: %d",x, resto);

}