#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf("MENU DE OP��ES \n");
    printf("****************************************** \n");
    printf("***** C�DIGO | PRATO         | VALOR *****\n");
    printf("***** 1      | Picanha       | 25 R$ *****\n");
    printf("***** 2      | Lasanha       | 20 R$ *****\n");
    printf("***** 3      | Strogonoff    | 18 R$ *****\n");
    printf("***** 4      | Bife Acebolado| 15 R$ *****\n");
    printf("***** 5      | P�o com Ovo   | 5  R$ *****\n");
    printf("\n");
    printf("Iforme o c�digo com base no prato desejado \n");
    scanf("%d", &codigo);

    system("cls || clar");

    switch (codigo)
    {
    case 1:
        printf("*** 1 | Picanha | 25 R$ ***\n");
        break;
    case 2:
        printf("*** 2 | Lasanha | 20 R$ ***\n");
        break;
    case 3:
        printf("*** 3 | Strogonoff | 18 R$ ***\n");
        break;
    case 4:
        printf("*** 4 | Bife Acebolado | 15 R$ ***\n");
        break;
    case 5:
        printf("*** 5 | P�o com Ovo | 5 R$ ***\n");
        break;
    default:
        printf("Valor inv�lido");
    }

    return 0;
}