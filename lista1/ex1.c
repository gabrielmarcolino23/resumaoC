#include <stdio.h>

int soma(int x,int y) {
    return x + y;
}

int multiplicar(int soma) {
    return soma*3;
}

int main() {
    int x,y, resultado;

    printf("Qual o valor do primeiro numero: ");
    scanf("%d", &x);

    printf("Qual o valor do segundo numero: ");
    scanf("%d", &y);

    resultado = multiplicar(soma(x, y));

    printf("O resultado da multiplicacao da soma por 3 e: %d", resultado);


    return 0;
}