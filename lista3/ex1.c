#include <stdio.h>

int fatorial(int n){
    if (n == 0){
        return 1;
    }else {
        return n * fatorial(n-1);
    }
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O fatorial desse numero e: %d", fatorial(n));

    return 0;
}
