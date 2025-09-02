#include <stdio.h>

void movBispo (int passos){
    for (int v = 0; v < passos; v++)
    {
        printf("cima\n");
        for (int h = 0; h < 1; h++)
        {
            printf("Direita\n");
        }
    }
}

void movTorre(int passos){
    if (passos > 0) {
        printf("Direita\n", passos);
        movTorre(passos - 1);
    }
}

void movRainha(int passos){
    if (passos > 0) {
        printf("Esquerda\n", passos);
        movRainha(passos - 1);
    }
}

int main() {
    int bispo = 5, torre = 5, rainha = 8, cavalo = 0, escolha;

    do {
        printf("\n♜ Movimento das peças de Xadrez ♜\n");
        printf("\nEscolha qual peça deseja mover:\n");
        printf("\n1. Bispo ♝\n");
        printf("2. Torre ♜\n");
        printf("3. Rainha ♛\n");
        printf("4. Cavalo ♞\n");
        printf("5. Sair do Programa\n");
        printf("Escolha o número da peça:\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nMovimento do Bispo ♝ :\n");
                movBispo(bispo);
                break;

            case 2:
                printf("\nMovimento da Torre ♜ :\n");
                movTorre(torre);
                break;  // Corrigido

            case 3:
                printf("\nMovimento da Rainha ♛ :\n");
                movRainha(rainha);
                break;

            case 4:
                printf("\nMovimento do Cavalo ♞ :\n");
                for(int v = 0; v < 2; v++) { 
                    {   for (int h = 0; h == 2; h++)
                    {
                        printf("Direita\n");
                    }
                    
                        printf("Cima\n");
                    }
                    
                } printf("Direita\n");
        
            
                break;

            case 5: 
                printf("Saindo do Programa...\n");
                break;

            default:
                printf("\nOpção inválida, por favor insira um número de 1 a 5\n");
                break;
        }
    } while (escolha != 5);

    return 0;
}
