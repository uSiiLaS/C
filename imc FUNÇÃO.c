#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

float calculo_imc(float peso, float altura)
{
    float resultado;

    resultado = peso / (altura * altura);

    return resultado;
}

char *resultado_imc(float imc)
{
    char resultado[250];

    if (imc < 17)
    {
        strcpy(resultado, "Muito abaixo do peso ideal!");
    }
    else if (imc < 18.49)
    {
        strcpy(resultado, "Abaixo do peso!");
    }
    else if (imc < 24.99)
    {
        strcpy(resultado, "Peso normal!");
    }
    else if (imc < 29.99)
    {
        strcpy(resultado, "Acima do peso!");
    }
    else if (imc < 34.99)
    {
        strcpy(resultado, "Obesidade grau 1!");
    }
    else if (imc < 34.99)
    {
        strcpy(resultado, "Obesidade grau 2!");
    }
    else
    {
        strcpy(resultado, "Obesidade grau 3 (mórbida)!");
    }

    return resultado;
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    float peso;
    float imc;
    float altura;

    printf("Informe o seu peso em KG: ");
    scanf("%f", &peso);

    printf("Informe a sua altura em METROS:");
    scanf("%f", &altura);

    imc = calculo_imc(peso, altura);

    printf("\n\nSeu índice de massa corpórea é: %.2f\n", imc);
    printf("%s", resultado_imc(imc));

    return 0;
}