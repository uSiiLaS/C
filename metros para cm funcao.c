#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

float conversaoMetrosCentimetros(float valorMetros)
{
    float resultado;

    resultado = valorMetros * 100;

    return resultado;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    float valorMetros;
    float valorCentimetros;

    printf("Informe um valor em METROS: ");
    scanf("%f", &valorMetros);

    valorCentimetros = conversaoMetrosCentimetros(valorMetros);

    system("cls || clear");

    printf("Exibindo resultados...\n");
    printf("Conversão: %.f centímetros", valorCentimetros);

    return 0;
}