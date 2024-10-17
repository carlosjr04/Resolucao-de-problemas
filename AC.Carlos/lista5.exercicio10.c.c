#include <stdio.h>
#include <string.h>

int main() {
    char user[9];
    char pw[9];
    char tmp[9];
    int proper = 1;
    do {
        proper = 1;
        printf("Entre novo username alfanumérico de até 8 caracteres: ");
        scanf(" %8[^\n]", tmp);
        for(int i = 0; tmp[i] != '\0'; i++) {
            if (!((tmp[i] >= 48 && tmp[i] <= 57) || (tmp[i] >= 'A' && tmp[i] <= 'Z') || (tmp[i] >= 'a' && tmp[i] <= 'z'))) {
                proper = 0;
                printf("Caractere inválido encontrado! Tente de novo.\n");
                break;
            }
        }
    } while (!(proper));
    strcpy(user, tmp);

    do {
        proper = 1;
        printf("Entre novo senha alfanumérica de até 8 caracteres: ");
        scanf(" %8[^\n]", tmp);
        for(int i = 0; tmp[i] != '\0'; i++) {
            if (!((tmp[i] >= 48 && tmp[i] <= 57) || (tmp[i] >= 'A' && tmp[i] <= 'Z') || (tmp[i] >= 'a' && tmp[i] <= 'z'))) {
                proper = 0;
                printf("Caractere inválido encontrado! Tente de novo.\n");
                break;
            }
        }
    } while (!(proper));
    strcpy(pw, tmp);
    char login[9];
    char login_pw[9];
    printf("Usuário e senha cadastrados! Faça login:\n");
    printf("Username: ");
    scanf(" %8[^\n]", login);
    printf("Senha: ");
    scanf(" %8[^\n]", login_pw);

    if (strcmp(login, user) == 0 && strcmp(login_pw, pw) == 0) {
        printf("OK");
    } else {
        printf("Acesso negado");
    }

    return 0;
}