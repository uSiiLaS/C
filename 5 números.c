#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int par = 0;
    int impar = 0;
    int numero;

    for (i = 1; i <= 5; i++)
    {
        printf("Informe o %d� n�mero: ", i);
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            par += 1;
        }
        else
        {
            impar += 1;
        }
    }

    printf("Quantidade de n�mero IMPAR: %d\n", impar);
    printf("Quantidade de n�mero PAR: %d\n", par);

    return 0;
}