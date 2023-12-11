#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

float media_aluno(float notas[])
{
    float soma;
    float resultado;
    int i;
    int j = 0;

    for (i = 0; i < 3; i++)
    {
        soma += notas[i];
        j++;
    }

    resultado = soma / (float)j;

    return resultado;
}

char *resultado_aluno(float media)
{
    char resultado[250];

    media >= 7 ? strcpy(resultado, "Aprovado!") : strcpy(resultado, "Reprovado!");

    return resultado;
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    float notas[3];
    float media;

    for (i = 0; i < 3; i++)
    {
        printf("Informe a %dº nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    system("cls || clear");

    media = media_aluno(notas);

    printf("Exibindo resultados...\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("%dº Nota: %.2f\n", i + 1, notas[i]);
    }

    printf("\nMédia: %.2f\n", media);
    printf("Aluno %s", resultado_aluno(media));

    return 0;
}