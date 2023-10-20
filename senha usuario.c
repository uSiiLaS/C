#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char login[250];
    char loginSalvo[250];
    char senha[250];
    char senhaSalva[250];
    int resultadoLogin;
    int resultadoSenha;

    printf("Seja Bem-Vindo!\n");
    printf("Primeiro acesso...\n");
    printf("Digite o login desejado: ");
    gets(loginSalvo);
    printf("Digite a senha desejada: ");
    gets(senhaSalva);

    system("cls || clear");

    printf("Login e senha cadastrados com sucesso!");
    Sleep(3000);

    system("cls || clear");

    do
    {
        printf("Digite o seu login: ");
        gets(login);
        printf("Digite a sua senha: ");
        gets(senha);

        system("cls || clear");

        resultadoLogin = strcmp(login, loginSalvo);
        resultadoSenha = strcmp(senha, senhaSalva);

        if (resultadoLogin == 0 && resultadoSenha == 0)
        {
            printf("Informações corretas...\nSeja Bem-vindo!");
        }
        else if (loginSalvo != 0 || senhaSalva != 0)
        {
            printf("Login ou senha incorreto\n Tente novamente...\n");
            Sleep(2000);
            system("cls || clear");
        }

    } while (resultadoLogin != 0 || resultadoSenha != 0);
    return 0;
}