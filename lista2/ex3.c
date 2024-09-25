#include <stdio.h>

void copiarVetor2x(char vetor[5], char vetor2[10]){
    int j = 0;
    for (int i = 0; i < 5; i++){
        vetor2[j] = vetor[i];
        vetor2[j + 1] = vetor[i];
        j += 2;
    }
}

void imprimirVetor(char vetor[10]){
    for (int i = 0 ;i < 10 ; i++){
        printf(" %c", vetor[i]);
    }
}

int main() {
    char vogais[5] = {'A','E','I','O','U'};
    char vogais2[10];

    copiarVetor2x(vogais,vogais2);
    imprimirVetor(vogais2);

    return 0;
}