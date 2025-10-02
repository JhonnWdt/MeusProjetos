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
#define MAX_EMPRESTIMOS 100
#define TAM_STRING 100

// --- Definição da estrutura (struct)
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao; 
    int disponivel;
};

// --- Nova função emprestimo
struct Emprestimo {
    int indiceLivro;
    char nomeUsuario[TAM_STRING];
};

// Função para limpar buffer de entrada
void limparBufferentrada() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// --- Função principal
int main(){
    // --- Agora usamos alocação Dinâmica de memória
    // --- usamos ponteiros ao inves de arrays estáticos
    struct Livro *biblioteca;
    struct Emprestimo *emprestimos;

    biblioteca = (struct Livro *) calloc(MAX_LIVROS, sizeof(struct Livro));

    emprestimos = (struct Emprestimo *) malloc(MAX_EMPRESTIMOS * sizeof(struct Emprestimo));

    // --- Verifica a alocação da memória
    if (biblioteca == NULL || emprestimos == NULL){
        printf("ERRO: Falha ao alocar memoria. \n");
        return 1; // Retorna 1 para indicar um erro.
    }

    int totalLivros = 0;
    int totalEmprestimos = 0;
    int opcao;

    do {
        // Exibe o menu de opções:
        printf("======================================\n");
        printf("      Biblioteca - PARTE 2 \n");
        printf("======================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Realizar emprestimo\n");
        printf("4 - Listar emprestimos\n");
        printf("5 - Sair\n");
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

                biblioteca[totalLivros].disponivel = 1;

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
        case 3: // realizar empréstimo
            printf("\n\n--- Realizar Empréstimo ---\n\n");

            if (totalEmprestimos >= MAX_EMPRESTIMOS) {
                printf("Limite de emprestimos atingido!\n");
            } else{
                printf("Livros disponiveis: \n");
                int disponiveis = 0;
                for (int i = 0; i < totalLivros; i++) {
                    if (biblioteca[i].disponivel) {
                        printf("%d - %s\n", i + 1, biblioteca[i].nome);
                        disponiveis++;
                    }
                }
                if (disponiveis == 0) {
                    printf("Nenhum livro disponivel para empréstimo.\n");
                } else {
                    printf("\nDigite o número do livro que deseja emprestar:");
                    int numLivro;
                    scanf("%d", &numLivro);
                    limparBufferentrada();

                    int indice = numLivro - 1;

                    if (indice >= 0 && indice < totalLivros && biblioteca[indice].disponivel) {
                        printf("Digite o nome do usuario que esta pegando o livro:");
                        fgets(emprestimos[totalEmprestimos].nomeUsuario, TAM_STRING, stdin);
                        emprestimos[totalEmprestimos].nomeUsuario[strcspn(emprestimos[totalEmprestimos].nomeUsuario, "\n")] = '\0';

                        emprestimos[totalEmprestimos].indiceLivro = indice;

                        biblioteca[indice].disponivel = 0;

                        totalEmprestimos++;
                        printf("Emprestimo realizado com sucesso!\n");
                    } else {
                        printf("\nNúmero de Livro inválido ou Livro indisponível.\n");
                    }
                }
            }
            printf("\nPressione Enter para continuar...");
            getchar();
            break;
        case 4: // Listar Empréstimos
            printf("--- Lista de Empréstimos --- \n\n");
            if (totalEmprestimos == 0) {
                printf("Nenhum emprestimo realizado.\n");
            } else {
                for (int i = 0; i < totalEmprestimos; i++) {
                    int indiceLivro = emprestimos[i].indiceLivro;
                    printf("\n======================================\n");
                    printf("Emprestimo %d\n", i + 1);
                    printf("Livro: %s\n", biblioteca[indiceLivro].nome);
                    printf("Usuario: %s\n", emprestimos[i].nomeUsuario);
                }
                printf("======================================");
            }
            getchar();
            break;
        case 5: //Sair
            printf("\nSaindo do sistema...\n");
            break;

        default: // Opção invalida
            printf("\nOpção inválida! Tente novamente.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            break;
        }
    } while (opcao != 5);

    free(biblioteca);
    free(emprestimos);

    printf("Memoria liberada com sucesso.");

    return 0;
}