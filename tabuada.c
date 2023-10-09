#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor;
    int i;
    int resultado;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    for (i = 1; i <= 10; i++)
    {
        resultado = valor * i;

        printf("%d x %d = %d \n", valor, i, resultado);
    }

    return 0;
}