#include <stdio.h>

void movBispo(int passos) {
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j < passos; j++) { 
            printf("Cima e Direita\n"); 
        }
    }
}
int main(){

    int bispo = 3;

    printf("\nMovimento do Bispo ♝ :\n");
    
    movBispo(bispo);
    
    



}