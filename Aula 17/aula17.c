
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];
    int quantidade;

    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    quantidade = strlen(nome);

    strcpy(confirmacao, nome);

    printf("\n--- Dados cadastrados ---\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Nome confirmado: %s\n", confirmacao);

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Usuario comum\n");
    } else {
        printf("Perfil invalido!\n");
        return 0;
    }

    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("%s\n", mensagem);

    return 0;
}
