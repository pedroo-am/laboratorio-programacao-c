
#include <stdio.h>


int dobro(int quantidade) {

    return quantidade * 2;

}

int main() {

    int quantidadeInicial;
    int quantidadeFinal;

    printf("Digite a quantidade inicial: ");
    scanf("%d", &quantidadeInicial);

    quantidadeFinal = dobro(quantidadeInicial);

    printf("Quantidade inicial: %d\n", quantidadeInicial);
    printf("Quantidade final: %d\n", quantidadeFinal);

    return 0;
}
