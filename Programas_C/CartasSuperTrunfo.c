#include <stdio.h>
#include <string.h>

int main() {
    int populacao1, populacao2, turismo1, turismo2;
    float pib1, pib2, area1, area2;
    char cidade1[50], cidade2[50], estado1[50], estado2[50], cod1[4], cod2[4];

    printf("Super Trunfo Países\n");

    printf("\n---Primeira Carta ---\n");

    printf("\nDigite uma letra de A a H para representar o estado:\n");
    scanf(" %c", &estado1[0]);

    printf("Código da Carta (3 caracteres):\n");
    scanf(" %3s", cod1);

    getchar();

    printf("Nome da Cidade: \n");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área da cidade: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo1);

    printf("\n---Segunda Carta ---\n");

    printf("Digite uma letra de A a H para representar o estado:\n");
    scanf(" %c", &estado2[0]);

    printf("Código da Carta (3 caracteres):\n");
    scanf(" %3s", cod2);

    getchar();

    printf("Nome da Cidade: \n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área da cidade: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1[0]);
    printf("Código da carta: %s\n", cod1);
    printf("Cidade: %s \n", cidade1); 
    printf("População: %d \n", populacao1);
    printf("Área da Cidade: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);

    printf("\n===============================\n");

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2[0]);
    printf("Código da carta: %s\n", cod2); 
    printf("Cidade: %s \n", cidade2); 
    printf("População: %d \n", populacao2);
    printf("Área da Cidade: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);

    return 0;
}
