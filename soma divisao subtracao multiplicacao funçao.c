#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int somar(int valor[])
{
    int resultadoSoma;

    resultadoSoma = valor[0] + valor[1];

    return resultadoSoma;
}
int subtrair(int valor[])
{
    int resultadoSubtracao;

    resultadoSubtracao = valor[0] - valor[1];

    return resultadoSubtracao;
}
int multiplicar(int valor[])
{
    int resultadoMultiplicacao;

    resultadoMultiplicacao = valor[0] * valor[1];

    return resultadoMultiplicacao;
}
float dividir(float valor[])
{
    float resultadoDivisao;

    resultadoDivisao = valor[0] / valor[1];

    return resultadoDivisao;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int valor[2];
    int soma, subtracao, multiplicacao;
    float divisao;

    for (i = 0; i < 2; i++)
    {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", &valor[i]);
    }

    soma = somar(valor);
    subtracao = subtrair(valor);
    multiplicacao = multiplicar(valor);
    divisao = dividir(valor);

    printf("\nExibindo resultados...\n\n");
    printf("Resultado da soma: %d\n", soma);
    printf("Resultado da subtração: %d\n", subtracao);
    printf("Resultado da multiplicação: %d\n", multiplicacao);
    printf("Resultado da divisao: %.2f\n", divisao);

    return 0;
}