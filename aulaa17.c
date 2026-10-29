
#include <stdio.h>
#include <string.h>

int main() {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100];
    int quantidade;

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);

    printf("Digite a categoria HARDWARE ou PERIFERICO: ");
    scanf("%19s", categoria);

    quantidade = strlen(produto);

    strcpy(copia, produto);

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("\nCategoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("\nCategoria: Periferico\n");
    } else {
        printf("\nCategoria invalida!\n");
        return 0;
    }

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n--- Resumo do cadastro ---\n");
    printf("Nome do produto: %s\n", produto);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Copia do nome: %s\n", copia);
    printf("Descricao: %s\n", descricao);

    return 0;
}
