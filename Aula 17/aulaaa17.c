
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char curso[10];
    char copia[50];
    char mensagem[100];
    int quantidade;

    printf("Digite o primeiro nome do estudante: ");
    scanf("%49s", nome);

    printf("Digite o codigo do curso CC ou EWS: ");
    scanf("%9s", curso);

    quantidade = strlen(nome);

    strcpy(copia, nome);

    if (strcmp(curso, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(curso, "EWS") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Codigo de curso invalido!\n");
        return 0;
    }

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n--- Dados do estudante ---\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("%s\n", mensagem);

    return 0;
}
