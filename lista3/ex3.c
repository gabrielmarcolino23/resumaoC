#include <stdio.h>

int quociente(int dividendo, int divisor) {
    if (dividendo < divisor) {
        return 0;
    }
    return 1 + quociente(dividendo - divisor, divisor);
}

int main() {
    int dividendo, divisor;
    
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    
    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    
    if (divisor == 0) {
        printf("dividir por zero é coisa de gay.\n");
        return 1;
    }
    
    int resultado = quociente(dividendo, divisor);
    printf("O quociente da divisão inteira de %d por %d é: %d\n", dividendo, divisor, resultado);
    
    return 0;
}