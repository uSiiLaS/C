#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

void par_impar(int valor)
{
    // char resultado[250];

    if (valor % 2 == 0)
    {
        printf("%d -> par", valor);
    }
    else
    {
        printf("%d -> impar", valor);
    }

    // valor % 2 == 0 ? strcpy(resultado, "O número é par!") : strcpy(resultado, "O número é impar!");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    par_impar(valor);

    return 0;
}
