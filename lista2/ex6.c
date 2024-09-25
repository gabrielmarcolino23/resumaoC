#include <stdio.h>

void inputMatriz(int matriz[2][2]){
    for(int i = 0;i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Insira a posicao [%d][%d] da matriz: ",i + 1, j + 1);
            scanf(" %d", &matriz[i][j]);
        }
    }
}

int verificarSimetria(int matriz[2][2]){
    int x = 0;
    for(int i = 0 ; i < 2; i ++){
        for(int j = 0; j < 2; j++){
            if(matriz[i][j] != matriz[j][i]){
                return 0;
            }
        }
    }
    return 1;

}

int main(){
    int matriz[2][2];

    inputMatriz(matriz);

    if(verificarSimetria(matriz)){
        printf("Simetrica");
    } else {
        printf("Nao simetrica");
    }
    
    return 0;
}