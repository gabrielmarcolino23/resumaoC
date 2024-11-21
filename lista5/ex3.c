#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um nó da lista
typedef struct NoLista { // Nó da lista
    int valor; // Valor do nó
    struct NoLista *prox; // Ponteiro para o próximo nó
} NoLista; // Nome da estrutura

// Estrutura para representar a lista
typedef struct {
    NoLista *inicio; // Ponteiro para o primeiro no da lista
    NoLista *fim; // Um ponteiro para o ultimo no da lista
} Lista; 

// Função para inicializar a lista como vazia
void fazlistavazia(Lista *lista) { // Função para inicializar a lista como vazia
    lista->inicio = NULL;  // Inicializa o ponteiro de início como NULL 
    lista->fim = NULL; // Inicializa o ponteiro de fim como NULL
}

// Função para criar um novo nó
NoLista* criano(int valor) { // Função para criar um novo nó
    NoLista *novo = (NoLista *)malloc(sizeof(NoLista));
    if (novo == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        exit(1);
    }
    novo->valor = valor;
    novo->prox = NULL;
    return novo;
}

// Função para inserir um nó no final da lista
int inserir(Lista *lista, NoLista *no) {
    if (lista->inicio == NULL) {
        // Lista está vazia
        lista->inicio = no;
        lista->fim = no;
    } else {
        // Adiciona no final
        lista->fim->prox = no;
        lista->fim = no;
    }
    return 1; // Sucesso
}

// Função para imprimir todos os elementos da lista
void Imprimir(Lista *lista) {
    NoLista *atual = lista->inicio;
    if (atual == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos da lista: ");
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

// Função para pesquisar um valor na lista
int pesquisar(Lista *lista, int valor) {
    NoLista *atual = lista->inicio;
    while (atual != NULL) {
        if (atual->valor == valor) {
            return 1; // Encontrado
        }
        atual = atual->prox;
    }
    return 0; // Não encontrado
}

// Função para remover um nó com o valor especificado
int remover(Lista *lista, int valor) {
    NoLista *atual = lista->inicio;
    NoLista *anterior = NULL;

    while (atual != NULL) {
        if (atual->valor == valor) {
            if (anterior == NULL) {
                // O nó a ser removido é o primeiro
                lista->inicio = atual->prox;
            } else {
                // O nó está no meio ou no final
                anterior->prox = atual->prox;
            }
            if (atual == lista->fim) {
                lista->fim = anterior;
            }
            free(atual);
            return 1; // Sucesso
        }
        anterior = atual;
        atual = atual->prox;
    }
    return 0; // Valor não encontrado
}

// Função principal para testar a lista encadeada
int main() {
    Lista lista;
    fazlistavazia(&lista);

    // Inserindo elementos
    printf("Inserindo 10, 20, 30 na lista...\n");
    inserir(&lista, criano(10));
    inserir(&lista, criano(20));
    inserir(&lista, criano(30));
    Imprimir(&lista);

    // Pesquisando elementos
    printf("Pesquisando o valor 20: %s\n", pesquisar(&lista, 20) ? "Encontrado" : "Não encontrado");
    printf("Pesquisando o valor 40: %s\n", pesquisar(&lista, 40) ? "Encontrado" : "Não encontrado");

    // Removendo um elemento
    printf("Removendo o valor 20...\n");
    remover(&lista, 20);
    Imprimir(&lista);

    // Removendo o valor 10
    printf("Removendo o valor 10...\n");
    remover(&lista, 10);
    Imprimir(&lista);

    return 0;
}
