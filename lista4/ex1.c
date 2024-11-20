#include <stdio.h>
#include <string.h> 

// Definição da estrutura com nome
struct Livro {
    char titulo[100];
    char autor[100];
    char editora[100];
    int ano;
};

// Função para entrada de dados
void inputLivro(struct Livro *livro) {
    printf("Digite o nome do livro: ");
    fgets(livro->titulo, sizeof(livro->titulo), stdin);
    livro->titulo[strcspn(livro->titulo, "\n")] = '\0';
    printf("Digite o autor do livro: ");
    fgets(livro->autor, sizeof(livro->autor), stdin);
    livro->autor[strcspn(livro->autor, "\n")] = '\0';

    printf("Digite a editora do livro: ");
    fgets(livro->editora, sizeof(livro->editora), stdin);
    livro->editora[strcspn(livro->editora, "\n")] = '\0';

    printf("Digite o ano de publicacao: ");
    scanf("%d", &livro->ano);
    getchar(); // Limpa o buffer
}

// Função para exibir os dados
void exibirLivro(struct Livro livro) {
    printf("\n--- Dados do Livro ---\n");
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Editora: %s\n", livro.editora);
    printf("Ano de publicacao: %d\n", livro.ano);
}

int main() {
    struct Livro livro;

    // Entrada e exibição dos dados
    inputLivro(&livro);
    exibirLivro(livro);

    return 0;
}
