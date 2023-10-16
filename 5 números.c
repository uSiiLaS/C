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
        printf("Informe o %dº número: ", i);
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

    printf("Quantidade de número IMPAR: %d\n", impar);
    printf("Quantidade de número PAR: %d\n", par);

    return 0;
}