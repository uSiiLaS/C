#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor = 0;

    printf("Digite um número: ");
    scanf("%d", &valor);

    system("cls");

    if (valor > 10)
    {
        printf("O valor %d é maior do que 10", valor);
    }
    else if (valor == 10)
    {
        printf("O valor %d é igual a 10", valor);
    }
    else if (valor > 5)
    {
        printf("O valor %d é maior do que 5", valor);
    }
    else if (valor > 3)
    {
        printf("Valor %d é maior do que 3", valor);
    }
    else
    {
        printf("O valor %d não é maior do que 3", valor);
    }

    return 0;
}