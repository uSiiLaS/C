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
    int numero;
    int par = 0;
    int impar = 0;

    for (i = 1; i <= 6; i++)
    {
        printf("Digite o %d� n�mero: \n", i);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("\nQuantidade de n�meros PARES: %d\n", par);
    printf("Quantidade de n�meros IMPARES: %d\n", impar);

    return 0;
}