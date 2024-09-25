#include <stdio.h>

float divisao(int x){
    return x/3;
}

int main() {
    int x;
    float quociente;

    printf("Insira um valor inteiro para X: ");
    scanf("%d", &x);

    quociente = divisao(x);

    printf("O quociente da divisao de X por 3 e %f", quociente); 

}
