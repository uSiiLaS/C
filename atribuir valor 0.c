#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    int valor[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", &valor[i]);

        valor[i] = valor[i] < 0 ? 0 : valor[i];

        // if (valor[i] < 0)
        //{
        // valor[i] = 0;
        //}
    }

    system("cls || clear");

    printf("Valores do vetor\n");

    for (i = 0; i < 5; i++)
    {
        printf("\t%d\n", valor[i]);
    }

    return 0;
}