
#include <stdio.h>


int verificarPar(int numero) {

    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }

}

int main() {

    int numero;
    int resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = verificarPar(numero);

    if (resultado == 1) {
        printf("O numero e par!\n");
    } else {
        printf("O numero e impar!\n");
    }

    return 0;
}
