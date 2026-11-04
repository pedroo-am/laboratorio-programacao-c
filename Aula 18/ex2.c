
#include <stdio.h>

// Funcao para comparar os precos
float maiorPreco(float p1, float p2) {

    if (p1 > p2) {
        return p1;
    } else {
        return p2;
    }

}

int main() {

    float preco1, preco2, resultado;

    printf("Digite o primeiro preco: ");
    scanf("%f", &preco1);

    printf("Digite o segundo preco: ");
    scanf("%f", &preco2);

    resultado = maiorPreco(preco1, preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais!\n");
    } else {
        printf("O maior preco e: %.2f\n", resultado);
    }

    return 0;
}
