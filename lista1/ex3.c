#include <stdio.h>

double mediaPonderada(double x,double y,double z) {
    return ((x*0.2) + (y*0.3) + (z*0.5));

}


int main() {
    double prova1,prova2,prova3,mediaFinal;

    printf("Digite sua nota da prova 1: ");
    scanf("%lf", &prova1);

    printf("Digite sua nota da prova 2: ");
    scanf("%lf", &prova2);

    printf("Digite sua nota da prova 3: ");
    scanf("%lf", &prova3);

    mediaFinal = mediaPonderada(prova1,prova2,prova3);

    printf("A media final desse aluno foi: %lf",mediaFinal);
}   