#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo;
    char prato[250];
    float valor;
    char resultado[250];

    printf("MENU DE OPÃ‡Ã•ES \n");
    printf("****************************************** \n");
    printf("\t CÓDIGO\t PRATO \t\t VALOR \t \n");
    printf("\t 1 \t Picanha \t 25 R$ \t \n");
    printf("\t 2 \t Lasanha \t 20 R$ \t \n");
    printf("\t 3 \t Strogonoff \t 18 R$ \t \n");
    printf("\t 4 \t Bife Acebolado\t 15 R$ \t \n");
    printf("\t 5 \t Pão com Ovo \t 5 R$ \t \n");
    printf("\n");
    printf("Informe o código com base no prato desejado \n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        valor = 25;
        strcpy(prato, "Picanha");
        break;
    case 2:
        valor = 20;
        strcpy(prato, "Lasanha");
        break;
    case 3:
        valor = 18;
        strcpy(prato, "Strogonoff");
        break;
    case 4:
        valor = 15;
        strcpy(prato, "Bife Acebolado");
        break;
    case 5:
        valor = 5;
        strcpy(prato, "Pão com Ovo");
        break;
    default:
        printf("Valor inválido");
    }

    printf("Prato: %s\nValor: R$ %.2f", prato, valor);

    return 0;
}