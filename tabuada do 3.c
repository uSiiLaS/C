#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int j;
    int i;
    int resultado;

    for (i = 1; i <= 7; i += 2)
    {
        for (j = 1; j <= 10; j++)
        {
            resultado = i * j;
            printf("%d x %d = %d\n", i, j, resultado);
        }
        printf("\n");
    }

    return 0;
}