#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variiáveis

    int valor1;
    int valor2;
    float media;
    int soma;
    int produto;
    int menorNumero;
    int maiorNumero;

    printf("Insira o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Insira o segundo valor: \n");
    scanf("%d", &valor2);

    media = (valor1 + valor2) / 2;
    soma = valor1 + valor2;
    produto = valor1 * valor2;

    printf("Média: %.2f \n", media);
    printf("Soma: %d \n", soma);
    printf("Multiplicação: %d  \n", produto);

    if (valor1 > valor2)
    {
        menorNumero = valor2;
        maiorNumero = valor1;
    }
    else
    {
        menorNumero = valor1;
        maiorNumero = valor2;
    }

    printf("Maior número: %d \n", maiorNumero);
    printf("Menor número: %d \n ", menorNumero);

    return 0;
}