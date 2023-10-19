#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i = 0;
    int valor;
    int soma = 0;
    float media;

    do
    {
        printf("Insira um valor: ");
        scanf("%d", &valor);

        if (valor > 0)
        {
            soma += valor;
            i++;
        }
    } while (valor >= 0);

    media = soma / i;

    system("cls || clear");

    printf("Média dos números: %.1f", media);

    return 0;
}