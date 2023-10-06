#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int valor1;
    int valor2;
    char operacao;
    char sinal[250];
    int soma;
    int multiplicacao;
    float divisao;
    int subtracao;
    float resultadoFinal;

    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);

    fflush(stdin);

    printf("Informe a operação desejada:");
    scanf("%c", &operacao);

    system("cls || clear");

    switch (operacao)
    {
    case '+':
        strcpy(sinal, "Soma");
        soma = valor1 + valor2;
        resultadoFinal = soma;
        break;
    case '*':
        strcpy(sinal, "Multiplicação");
        multiplicacao = valor1 * valor2;
        resultadoFinal = multiplicacao;
        break;
    case '-':
        strcpy(sinal, "Subtração");
        subtracao = valor1 - valor2;
        resultadoFinal = subtracao;
        break;
    case '/':
        strcpy(sinal, "Divisão");
        divisao = valor1 / valor2;
        resultadoFinal = divisao;
        break;
        default:
        printf("Operação incorreta!");
    }

    printf("Primeiro valor: %d \n", valor1);
    printf("Segundo valor: %d \n", valor2);
    printf("Resultado da %s:  %.2f \n", sinal, resultadoFinal);

    return 0;
}