#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Cordenadas;

float calcularDistancia(Cordenadas P, Cordenadas Q){
    float distanciaTotal;
    distanciaTotal = sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
    return distanciaTotal;
}

void inputPonto(Cordenadas *c){
    printf("Qual o ponto x: ");
    scanf("%f", &c->x);

    printf("Qual o ponto y: ");
    scanf("%f", &c->y);
}

int main(){ 

    // Instanciando Estruturas
    Cordenadas P, Q;

    // Instanciando Resultado
    float distanciaTotal;

    // Atribuindo Valores
    printf("Digite as cordenadas do primeiro ponto: \n");
    inputPonto(&P);

    printf("Digite as cordenadas do segundo ponto: \n");
    inputPonto(&Q);

    // Calculando a distancia dos pontos
    distanciaTotal = calcularDistancia(P,Q);

    printf("A distancia total entre os dois pontos e %.2f", distanciaTotal);

    return 0;
}