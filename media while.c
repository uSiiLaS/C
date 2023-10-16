#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando variáveis
    int i;
    float nota;
    float media;
    float soma;

    // Solicitando dados ao usuário
    for (i = 1; i <= 2; i++)
    {
        printf("\nInforme a %dº nota:\n ", i);
        scanf("%f", &nota);
        while (nota > 10 || nota < 0)
        {
            printf("\nNota inválida\nTente novamente...\n");
            printf("Informe a nota:\n ");
            scanf("%f", &nota);
        }
        soma += nota;
        media = soma / i;
    }

    // Limpa tela
    system("cls || clear");

    //Informando dados ao usuário
    printf("Média do aluno: %.2f", media);

    return 0;
}