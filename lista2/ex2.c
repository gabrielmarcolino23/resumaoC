#include <stdio.h>

void inputVetor(float vetor[4]) {
    for (int i = 0; i < 4; i++){
        printf("Digite 4 numeros reais %d de 4: ", i +1);
        scanf("%f", &vetor[i]);
    }
}

void copiarVetor(float vetor[4],float vetor1[4]){
    for (int i = 0; i < 4; i++){
        vetor1[i] = vetor[i];
    }
}

void imprimirVetor(float vetor[4]){
    for (int i = 0; i < 4; i++){
        printf("%.2f ",vetor[i]);
    }
}

int main() {
    float vetor1[4],vetor2[4];

    inputVetor(vetor1);

    copiarVetor(vetor1,vetor2);

    imprimirVetor(vetor2);
     
}