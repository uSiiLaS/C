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
        printf("Informe o %dº valor: \n", i + 1);
        scanf("%d", &valor[i]);
    }
    printf("\n\n");

    for (i = 5; i >= 0; i--)
    {
        if (valor[i] % 2 == 0 && valor[i] > 0)
        {
            printf("%dº vetor: %d\n", i, valor[i]);
        }
    }

    return 0;
}