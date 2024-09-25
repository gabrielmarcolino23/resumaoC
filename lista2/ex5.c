#include <stdio.h>

void transporMatriz(int matriz[2][2], int matrizT[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
          matrizT[j][i] = matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[2][2]){
    for(int i = 0;i < 2; i++){
        for(int j = 0; j < 2 ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[2][2] = {
        {1,2},
        {3,4}
    };
    int matrizT[2][2];

    transporMatriz(matriz,matrizT);
    imprimirMatriz(matrizT);
}

