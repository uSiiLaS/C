#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis
    char loginSalvo[250];
    char senhaSalva[250];
    char login[250];
    char senha[250];

    // Solicitando informa��es
    printf("PRIMEIRO ACESSO\n");
    printf("Por gentileza! \n");
    printf("Digite o login desejado: \n");
    gets(loginSalvo);
    printf("Digite a senha desejada: \n");
    gets(senhaSalva);

    system("cls");

    printf("Informe o login cadastrado: \n");
    gets(login);
    printf("Informe a senha: \n");
    gets(senha);

    if (strcmp(login, loginSalvo) || strcmp(senha, senhaSalva))
    {
        printf("Login ou senha inv�lidos");
    }
    else
    {
        printf("Seja Bem-Vindo!");
    }

    return 0;
}