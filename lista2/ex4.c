#include <stdio.h>

void inputMatriz(int matriz[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0 ; j < 3; j++){
            printf("Insira o valor da posicao [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int matriz[3][3], int matriz2[3][3],int matriz3[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                matriz3[i][j] += matriz[i][k] * matriz2[k][j];
            }

        }
    }

}

int main(){
    int matriz[3][3];
    int matriz2[3][3] = {
        {2,2,2},
        {2,2,2},
        {2,2,2}
    };
    int matriz3[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    inputMatriz(matriz);
    multiplicarMatrizes(matriz,matriz2,matriz3);
    imprimirMatriz(matriz3);
    

    return 0;
}   
