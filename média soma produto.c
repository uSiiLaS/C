#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando varii�veis

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

    printf("M�dia: %.2f \n", media);
    printf("Soma: %d \n", soma);
    printf("Multiplica��o: %d  \n", produto);

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

    printf("Maior n�mero: %d \n", maiorNumero);
    printf("Menor n�mero: %d \n ", menorNumero);

    return 0;
}