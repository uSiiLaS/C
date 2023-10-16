#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando vari�veis
    int i;
    float nota;
    float media;
    float soma;

    // Solicitando dados ao usu�rio
    for (i = 1; i <= 2; i++)
    {
        printf("\nInforme a %d� nota:\n ", i);
        scanf("%f", &nota);
        while (nota > 10 || nota < 0)
        {
            printf("\nNota inv�lida\nTente novamente...\n");
            printf("Informe a nota:\n ");
            scanf("%f", &nota);
        }
        soma += nota;
        media = soma / i;
    }

    // Limpa tela
    system("cls || clear");

    //Informando dados ao usu�rio
    printf("M�dia do aluno: %.2f", media);

    return 0;
}