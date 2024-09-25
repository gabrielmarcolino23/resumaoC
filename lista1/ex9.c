#include <stdio.h>

float calcularValorViagem(float dist, float cons, float pLit) {
    return (dist / cons) * pLit;
}

int main() {

    float distancia, consumo, pLitro, valorTotal;

    printf("Qual a distancia a ser percorrida: ");
    scanf("%f", &distancia);

    printf("Quanto seu carro consome por litro: ");
    scanf("%f", &consumo);

    printf("Qual o preco do litro do combustivel: ");
    scanf("%f", &pLitro);

    valorTotal = calcularValorViagem(distancia, consumo, pLitro);

    printf("Qual o valor total que vc ira gastar com combustivel nessa viagem e de R$%.2f\n", valorTotal);

    return 0;
}