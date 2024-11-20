#include <stdio.h>

// Definição da estrutura rotulada Complexo
typedef struct {
    float real;
    float imaginario;
} Complexo;

// Função para somar os dois numeros complexos.
Complexo somarComplexos(Complexo c1, Complexo c2) { 
    Complexo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

void exibirComplexo(Complexo c3){
    printf("%.2f + %.2fi\n", c3.real, c3.imaginario);
}

int main(){ 
    
    // Declaração dos numeros reais
    Complexo num1, num2, resultado;
    
    // Atribuição de valores
    num1.real = 3.0;
    num1.imaginario = 4.0;

    num2.real = 1.5;
    num2.imaginario = 2.5;

    // Exibir numeros complexos
    printf("Num 1:");
    exibirComplexo(num1);

    printf("Num 2:");
    exibirComplexo(num2);

    resultado = somarComplexos(num1, num2);

    printf("Resultado da soma deles: ");
    exibirComplexo(resultado);

    return 0;
}