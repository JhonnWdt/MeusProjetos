// ===============================================================================
//
// PRÁTICA SISTEMA DE BIBLIOTECA - PARTE 1
//
// OBJETIVO DESTA PARTE:
// Implementar o cadastro e a listagem de livros usando um array estático
// Foco em structs, entrada/saída de dados e organização básica.
//
// ===============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para strcspn()

// --- Constantes Globais
#define MAX_LIVROS 50
#define TAM_STRING 100

// --- Definição da estrutura (struct)
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao; 
};

// Função para limpar buffer de entrada
void limparBufferentrada() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// --- Função principal
int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    // -- Laço menu principal
    do {
        // Exibe o menu de opções:
        printf("======================================\n");
        printf("      Biblioteca - PARTE 1 \n");
        printf("======================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Sair\n");
        printf("======================================\n");
        printf("Escolha uma opção: ");
        
        scanf("%d", &opcao);
        limparBufferentrada();

        switch (opcao)
        {
        case 1: // cadastro do livro
            printf("\n--- Cadastro de novo livro ---\n\n");

            if (totalLivros < MAX_LIVROS) {
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                printf("Digite o nome do autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                printf("Digite a editora: ");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                // remove o \n deixado pelo fgets
                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                printf("Digite a edição: ");
                scanf("%d", &biblioteca[totalLivros].edicao);
                limparBufferentrada();

                totalLivros++;

                printf("\nLivro cadastrado com sucesso!\n");
            } else {
                printf("\nBiblioteca cheia! Não foi possível realizar o cadastro.\n");
            }

            printf("\nPressione Enter para continuar...");
            getchar();
            break;
        
        case 2: // Listagem de Livros
            printf("\n--- Lista de Livros Cadastrados ---\n");

            if (totalLivros == 0) {
                printf("Nenhum livro cadastrado.\n");
            } else {
                for (int i = 0; i < totalLivros; i++) {
                    printf("======================================\n");
                    printf("Livro nº %d\n", i + 1);
                    printf("Nome: %s\n", biblioteca[i].nome);
                    printf("Autor: %s\n", biblioteca[i].autor);
                    printf("Editora: %s\n", biblioteca[i].editora);
                    printf("Edição: %d\n", biblioteca[i].edicao);    
                }
                printf("======================================\n");
            }
            
            printf("\nPressione Enter para continuar...");
            getchar();
            break;

        case 3: //Sair
            printf("\nSaindo do sistema...\n");
            break;

        default: // Opção invalida
            printf("\nOpção inválida! Tente novamente.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            break;
        }
    } while (opcao != 3);

    return 0;
}
