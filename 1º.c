#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    float nota;
    float soma;
    float media;
    char resultado[250];

    for (i = 1; i <= 5; i++)
    {
        printf("Digite a %d� nota: \n", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10)
        {
            printf("\nNota inv�lida\nTente novamente...\n\n");
            printf("Digite a %d� nota: \n", i);
            scanf("%f", &nota);
        }
        soma += nota;
        media = (float) soma / i;
    }

    system("cls || clear");

    if (media >= 7)
    {
        strcpy(resultado, "APROVADO!");
    }
    else
    {
        strcpy(resultado, "REPROVADO!");
    }

    printf("M�dia do aluno: %.2f\n", media);
    printf("Situa��o do aluno: %s\n", resultado);

    return 0;
}
