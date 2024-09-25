#include <stdio.h>

float areaTriangulo(float x,float y) {
    return (x*y)/2;
}

int main() {
    float base, altura, area;

    printf("Qual a o tamanho da base do triangulo: ");
    scanf("%f", &base);

    printf("Qual a o tamanho da altura do triangulo: ");
    scanf("%f", &altura);

    area = areaTriangulo(base,altura);

    printf("A area desse trinagulo e de %f", area);
}