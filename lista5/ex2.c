#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Capacidade máxima da fila

// Estrutura da Fila Circular
typedef struct {
    int itens[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

// Inicializa a fila como vazia
void fazfilavazia(Fila *fila) {
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
}

// Verifica se a fila está vazia (0 = falso, 1 = verdadeiro)
int vazia(Fila *fila) {
    return fila->tamanho == 0;
}

// Verifica se a fila está cheia (0 = falso, 1 = verdadeiro)
int cheia(Fila *fila) {
    return fila->tamanho == MAX;
}

// Retorna o número de elementos na fila
int tamfila(Fila *fila) {
    return fila->tamanho;
}

// Insere um item no fim da fila
int enfileirar(int item, Fila *fila) {
    if (cheia(fila)) {
        printf("Erro: Fila cheia!\n");
        return 0; // Falha
    }
    fila->itens[fila->fim] = item;
    fila->fim = (fila->fim + 1) % MAX; // Incrementa circularmente
    fila->tamanho++;
    return 1; // Sucesso
}

// Remove um item do início da fila
int desenfileirar(Fila *fila) {
    if (vazia(fila)) {
        printf("Erro: Fila vazia!\n");
        return -1; // Indica erro
    }
    int item = fila->itens[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX; // Incrementa circularmente
    fila->tamanho--;
    return item;
}

// Exibe os elementos da fila (opcional para testes)
void exibeFila(Fila *fila) {
    if (vazia(fila)) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Fila (inicio -> fim): ");
    int i = fila->inicio;
    for (int count = 0; count < fila->tamanho; count++) {
        printf("%d ", fila->itens[i]);
        i = (i + 1) % MAX; // Incrementa circularmente
    }
    printf("\n");
}

int main() {
    Fila fila;
    fazfilavazia(&fila);

    // Testando as funções
    printf("Enfileirando 10, 20, 30...\n");
    enfileirar(10, &fila);
    enfileirar(20, &fila);
    enfileirar(30, &fila);
    exibeFila(&fila);

    printf("Tamanho da fila: %d\n", tamfila(&fila));

    printf("Desenfileirando elemento: %d\n", desenfileirar(&fila));
    exibeFila(&fila);

    printf("Enfileirando 40, 50...\n");
    enfileirar(40, &fila);
    enfileirar(50, &fila);
    exibeFila(&fila);

    printf("A fila está cheia? %s\n", cheia(&fila) ? "Sim" : "Não");

    printf("Desenfileirando todos os elementos...\n");
    while (!vazia(&fila)) {
        printf("Removido: %d\n", desenfileirar(&fila));
    }
    exibeFila(&fila);

    return 0;
}
