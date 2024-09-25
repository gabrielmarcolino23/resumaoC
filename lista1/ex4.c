#include <stdio.h>

float calcularSalarioLiquido(float x) {
    return x - (x*0.115);
}

int main() {
    char nome[20];
    float salarioBruto, salarioLiquido;

    printf("Digite o nome do funcionario: ");
    scanf("%s",nome);

    printf("Qual o seu salario bruto: ");
    scanf("%f", &salarioBruto);

    salarioLiquido = calcularSalarioLiquido(salarioBruto);

    printf("O salario bruto do %s e de R$%.2f e o salario liquido e de R$%.2f",nome ,salarioBruto,salarioLiquido);
}
