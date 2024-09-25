#include <stdio.h>

void inputMatriz(int matriz[2][2]){
    for (int i = 0 ; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Insira o elemento da posicao [%d][%d] da matriz: ",i+ 1, j+  1);
            scanf(" %d", &matriz[i][j]);
        }
    }
}

int inputMultiplicador(int *n){ // Uso um ponteiro para modificar o valor de n
    printf("Insira um valor para o multiplicador: ");
    scanf("%d", n);
}

void multDiagonal(int matriz[2][2], int n){
    for (int i = 0 ; i < 2; i++){
        for(int j = 0; j < 2;j++){
            if(i == j){
                matriz[i][j] *= n;
            }
        }
    }
}

void imprimirMatriz(int matriz[2][2]){
    for(int i = 0; i < 2;i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[2][2], n;

    inputMatriz(matriz);
    inputMultiplicador(&n); // Passo o endereco de n para modificar seu valor

    multDiagonal(matriz,n);
    imprimirMatriz(matriz);

    return 0;
}