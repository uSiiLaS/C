#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

void par_impar(int valor[])
{
    int i;
    int par = 0;
    int impar = 0;

    for (i = 0; i < 6; i++)
    {
        valor[i] % 2 == 0 ? par++ : impar++;
    }
    printf("\nQuantidade de PARES: %d\n Quantidade de IMPARES: %d\n", par, impar);
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", &valor[i]);
    }

    par_impar(valor);

    return 0;
}