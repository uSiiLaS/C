#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor;

    printf("Informe um valor de 1 at� 12 referente aos meses de um ano: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("M�s de Janeiro \n");
        break;
    case 2:
        printf("M�s de Fevereiro \n");
        break;
    case 3:
        printf("M�s de Mar�o \n");
        break;
    case 4:
        printf("M�s de Abril \n");
        break;
    case 5:
        printf("M�s de Maio \n");
        break;
    case 6:
        printf("M�s de Junho \n");
        break;
    case 7:
        printf("M�s de Julho \n");
        break;
    case 8:
        printf("M�s de Agosto \n");
        break;
    case 9:
        printf("M�s de Setembro \n");
        break;
    case 10:
        printf("M�s de Outubro \n");
        break;
    case 11:
        printf("M�s de Novembro \n");
        break;
    case 12:
        printf("M�s de Dezembro \n");
        break;
    default:
        printf("N�mero incorreto");
        printf("TENTE NOVAMENTE!");
    }

    return 0;
}