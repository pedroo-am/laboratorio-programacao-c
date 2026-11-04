/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


void exibirMenu() {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}


float somar(float n1, float n2) {
    return n1 + n2;
}

float subtrair(float n1, float n2) {
    return n1 - n2;
}

float multiplicar(float n1, float n2) {
    return n1 * n2;
}

float dividir(float n1, float n2) {
    return n1 / n2;
}

int main() {

    int opcao = -1;
    float n1, n2, resultado;

    while (opcao != 0) {

        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Digite dois numeros: ");
                scanf("%f %f", &n1, &n2);

                resultado = somar(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%f %f", &n1, &n2);

                resultado = subtrair(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Digite dois numeros: ");
                scanf("%f %f", &n1, &n2);

                resultado = multiplicar(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Digite dois numeros: ");
                scanf("%f %f", &n1, &n2);

                if (n2 == 0) {
                    printf("Erro! Nao pode dividir por zero.\n");
                } else {
                    resultado = dividir(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 0:
                printf("Encerrando calculadora...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
