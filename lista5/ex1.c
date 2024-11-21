#include <stdio.h>
#include <stdlib.h>

// Definir tamanho da pilha como constante
#define MAX 100

// Instanciando estrutura
typedef struct {
    int itens[MAX];
    int topo;
} Pilha;

// Função FPVazia(pilha) que faz a pilha ficar vazia

void FPVazia(Pilha *pilha) {
    pilha->topo = -1;
}

// Função Vazia: Verifica se a pilha está vazia.

int Vazia(Pilha *pilha){ 
    return pilha->topo == -1; // Se o topo da pilha for -1 retorna true.
}

// Função empilha 

int Empilha(Pilha *pilha, int x){
    if (pilha->topo >= MAX -1) {
        return printf("Erro: Pilha cheia!"), -1; // Indica erro 
    } 
    pilha->topo++;
    pilha->itens[pilha->topo] = x;
}

int Desempilha(Pilha *pilha){
    if (Vazia(pilha)){
        printf("Erro: Pilha Vazia!");
        return -1;
    }
    int elementeRemovido = pilha->itens[pilha->topo];
    pilha->topo--;
    return elementeRemovido;
}

int Tamanho(Pilha *pilha){
    return pilha->topo + 1;
}

void ExibePilha(Pilha *pilha) {
    if (Vazia(pilha)) {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Pilha (topo -> base): ");
    for (int i = pilha->topo; i >= 0; i--) {
        printf("%d ", pilha->itens[i]);
    }
    printf("\n");
}

int main(){

    Pilha pilha;

    FPVazia(&pilha);

    // Empilhando
    Empilha(&pilha, 10);
    Empilha(&pilha, 11);
    Empilha(&pilha, 12);
    Empilha(&pilha, 13);
    Empilha(&pilha, 14);


    ExibePilha(&pilha);

    Desempilha(&pilha);
    ExibePilha(&pilha);

    Tamanho(&pilha);

    return 0;
}