#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i = 0;
    float nota;
    char resposta[250] = "NAO";
    char resposta1[250];
    int resultado;
    float soma = 0;
    float media;

    do
    {
        printf("Informa a sua %d° nota: \n", i + 1);
        scanf("%f", &nota);

        fflush(stdin);

        printf("Deseja inserir mais uma nota?\n");
        gets(resposta1);

        resultado = strcmp(resposta, resposta1);

        soma += nota;
        i++;

    } while (resultado != 0);

    media = soma / i;

    printf("Resultado da média: %.2f", media);

    return 0;
}