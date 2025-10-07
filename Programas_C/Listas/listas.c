#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50
#define TAM_MAX 10

typedef struct {
    char dados[TAM_MAX][MAX_STR_LEN];
    int quantidade;
} ListaEstatica;

void inicializarListaEstatica(ListaEstatica *lista);
void inserirListaEstatica(ListaEstatica *lista, const char *texto);
void removerListaEstatica(ListaEstatica *lista, const char *texto);
void listarListaEstatica(const ListaEstatica *lista);

typedef struct No {
    char *dado;
    struct No *proximo;
} No;

typedef No *ListaEncadeada;

void inicializarListaEncadeada(ListaEncadeada *lista);
void inserirListaEncadeada(ListaEncadeada *lista, const char *texto);
void removerListaEncadeada(ListaEncadeada *lista, const char *texto);
void listarListaEncadeada(const ListaEncadeada lista);
void liberarListaEncadeada(ListaEncadeada *lista);

int main() {
    int opcao;
    do {
        printf("\n--- Manipulação de Listas (Texto) ---\n");
        printf("1. Lista Estática\n");
        printf("2. Lista Encadeada\n");
        printf("0. Sair do Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                ListaEstatica lista;
                inicializarListaEstatica(&lista);

                inserirListaEstatica(&lista, "Item 1");
                inserirListaEstatica(&lista, "Item 2");
                listarListaEstatica(&lista);

                removerListaEstatica(&lista, "Item 1");
                listarListaEstatica(&lista);
                break;
            }
            case 2: {
                ListaEncadeada lista;
                inicializarListaEncadeada(&lista);

                inserirListaEncadeada(&lista, "Texto A");
                inserirListaEncadeada(&lista, "Texto B");
                listarListaEncadeada(lista);

                removerListaEncadeada(&lista, "Texto A");
                listarListaEncadeada(lista);

                liberarListaEncadeada(&lista);
                break;
            }
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

void inicializarListaEstatica(ListaEstatica *lista) {
    lista->quantidade = 0;
}

void inserirListaEstatica(ListaEstatica *lista, const char *texto) {
    if (lista->quantidade == TAM_MAX) {
        printf("Erro: Lista cheia! Não é possível inserir.\n");
        return;
    }

    strcpy(lista->dados[lista->quantidade], texto);
    lista->quantidade++;
    printf("Texto \"%s\" inserido com sucesso.\n", texto);
}

void removerListaEstatica(ListaEstatica *lista, const char *texto) {
    int i, pos = -1;

    for (i = 0; i < lista->quantidade; i++) {
        if (strcmp(lista->dados[i], texto) == 0) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Erro: Texto \"%s\" não encontrado na lista.\n", texto);
        return;
    }

    for (i = pos; i < lista->quantidade - 1; i++) {
        strcpy(lista->dados[i], lista->dados[i + 1]);
    }

    lista->quantidade--;
    printf("Texto \"%s\" removido com sucesso.\n", texto);
}

void listarListaEstatica(const ListaEstatica *lista) {
    if (lista->quantidade == 0) {
        printf("A lista estática está vazia.\n");
        return;
    }
    printf("Itens da Lista Estática: [ ");
    for (int i = 0; i < lista->quantidade; i++) {
        printf("\"%s\" ", lista->dados[i]);
    }
    printf("]\n");
}

void inicializarListaEncadeada(ListaEncadeada *lista) {
    *lista = NULL;
}

void inserirListaEncadeada(ListaEncadeada *lista, const char *texto) {
    No *novoNo = (No *)malloc(sizeof(No));

    if (novoNo == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return;
    }

    novoNo->dado = (char *)malloc(strlen(texto) + 1);

    if (novoNo->dado == NULL) {
        printf("Erro: Falha na alocação de memória para o texto.\n");
        free(novoNo);
        return;
    }

    strcpy(novoNo->dado, texto);
    novoNo->proximo = *lista;
    *lista = novoNo;

    printf("Texto \"%s\" inserido com sucesso.\n", texto);
}

void removerListaEncadeada(ListaEncadeada *lista, const char *texto) {
    No *atual = *lista;
    No *anterior = NULL;

    while (atual != NULL && strcmp(atual->dado, texto) != 0) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        printf("Erro: Texto \"%s\" não encontrado na lista.\n", texto);
        return;
    }

    if (anterior == NULL) {
        *lista = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual->dado);
    free(atual);
    printf("Texto \"%s\" removido com sucesso.\n", texto);
}

void listarListaEncadeada(const ListaEncadeada lista) {
    No *temp = lista;
    if (temp == NULL) {
        printf("A lista encadeada está vazia.\n");
        return;
    }
    printf("Itens da Lista Encadeada: [ ");
    while (temp != NULL) {
        printf("\"%s\" ", temp->dado);
        temp = temp->proximo;
    }
    printf("]\n");
}

void liberarListaEncadeada(ListaEncadeada *lista) {
    No *atual = *lista;
    No *proximo;
    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual->dado);
        free(atual);
        atual = proximo;
    }
    *lista = NULL;
}