#include <stdio.h>

void pedirNumero(float *numero) {
    while (1) {  
        if (scanf("%f", numero) == 1) {
            break;  
        } else {
            printf("Erro: Entrada inválida! Por favor, insira um número válido.\n");
            while (getchar() != '\n');
            printf("Tente novamente: ");
        }
    }
}

int main(){
    float numero1, numero2, resultado;
    int escolha;

    printf("+-+ Calculadora +-+\n");
    printf("\nSelecione qual operação deseja realizar:\n");
    printf("\n1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair do Aplicativo.\n");
    scanf("%d", &escolha);

switch (escolha)
{
case 1:
    printf("+++ Você escolheu soma +++\n");
    printf("\nDigite o primeiro número:\n");
    pedirNumero(&numero1);

    printf("Digite o segundo número:\n");
    pedirNumero(&numero2);
  
    resultado = numero1 + numero2;
    printf("O resultado da soma é: %.2f\n", resultado);
    break;

case 2: 
    printf("--- Você Escolheu Subtração ---\n");
    printf("\n Digite o primeiro número:\n");
    pedirNumero(&numero1);

    printf("Digite o Segundo Número:\n");
    pedirNumero(&numero2);

    resultado = numero1 - numero2;
    printf("O Resultado da subtração é: %.2f\n", resultado);
    break;

case 3: 
    printf("*** Você escolheu Multiplicação ***\n");
    printf("\nDigite o primeiro número:\n");
    pedirNumero(&numero1);

    printf("Digite o segundo número:\n");
    pedirNumero(&numero2);

    resultado = numero1 * numero2;
    printf("O resultado da multiplicação é: %.2f\n", resultado);
    break;

case 4: 
    printf("/// Você escolheu Divisão ///\n");
    printf("\nDigite o primeiro número:\n");
    pedirNumero(&numero1);

    printf("Digite o segundo número:\n");
    pedirNumero(&numero2);

    resultado = numero1 / numero2;
    printf("O resultado da divisão é: %.2f\n", resultado);
    break;

case 5:
    printf("Saindo do programa.");
    break;

default:
    printf("Opção inválida, por favor selecione uma das opções1 de 1 a 5\n");
    break;
}

    return 0;
}