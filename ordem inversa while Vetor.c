#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int valor[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        do
        {
            if (valor[i] < 0 || valor[i] % 2 != 0)
            {
                printf("\nInforme o valor novamente!\n");
            }
            printf("Informe o %d� valor: \n", i + 1);
            scanf("%d", &valor[i]);

        } while (valor[i] % 2 != 0 || valor[i] < 0);
    }

    printf("\n\n");
    printf("Valores na ordem inversa;\n");

    for (i = 5; i >= 0; i--)
    {
        printf("\t%d\n", valor[i]);
    }

    return 0;
}