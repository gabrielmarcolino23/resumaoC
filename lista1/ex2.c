#include <stdio.h>

int media(int x, int y,int z) {
    return (x+y+z)/3;
}


int main() {
    int x,y,z,resultado;

    printf("Digite o x: ");
    scanf("%d",&x);

    printf("Digite o y: ");
    scanf("%d",&y);

    printf("Digite o z: ");
    scanf("%d",&z);

    resultado = media(x,y,z);

    printf("O a media aritimetica desses tres numeros e: %d", resultado);

}