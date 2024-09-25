#include <stdio.h>

void inputLetras(char vetor[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Escreva uma letra [%d] de 5: ", i + 1);
        scanf(" %c", &vetor[i]);
    }
}

void imprimirLetras(char vetor[5]){
    for(int i = 4; i >= 00; i--) {
        printf(" %c", vetor[i]);
    }  
}

int main() {
    char letras[5];

    inputLetras(letras);

    printf("Letras na orden reversa:\n");
    imprimirLetras(letras);

    return 0;
}