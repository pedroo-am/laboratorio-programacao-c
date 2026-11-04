
#include <stdio.h>


int calcularFatorial(int numero) {

    int resultado = 1;

    for (int i = 1; i <= numero; i++) {

        resultado = resultado * i;

    }

    return resultado;
}

int main() {

    int numero;
    int resultado;

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {

        printf("Numero invalido!\n");

    } else {

        resultado = calcularFatorial(numero);

        printf("O fatorial de %d e: %d\n", numero, resultado);

    }

    return 0;
}
