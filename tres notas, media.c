#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    float nota;
    float soma = 0;
    float media;
    char resultado[250];

    for (i = 1; i <= 3; i++)
    {
        printf("Informe a %dº nota: ", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10)
        {
            printf("\nNota inválida\nTente novamente...\n");
            printf("Informe a %dº nota: ", i);
            scanf("%f", &nota);
        }
        soma += nota;
        media = soma / i;
    }

    system("cls || clear");

    printf("Média do aluno: %.2f\n", media);

    if (media >= 7)
    {
        strcpy(resultado, "Aprovado!");
    }
    else if (media >= 5 && media < 7)
    {
        strcpy(resultado, "Recuperação!");
    }
    else
    {
        strcpy(resultado, "Reprovado!");
    }

    printf("%s", resultado);

    return 0;
}