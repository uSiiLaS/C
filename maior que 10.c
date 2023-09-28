#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor = 0;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    system("cls");

    if (valor > 10)
    {
        printf("O valor %d e maior do que 10", valor);
    }

    else

    {
        printf("O valor %d e menor do que 10", valor);
    }

    return 0;
}