#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero1;
    int numero2;
    int numero3;
    int maior;
    int menor;

    printf("Digite um n�mero: ");
    scanf("%d", &numero1);
    printf("Digite um outro n�mero: ");
    scanf("%d", &numero2);
    printf("Digite um outro n�mero: ");
    scanf("%d", &numero3);

    system("cls || clear");

    printf("Primeiro n�mero: %d \n", numero1);
    printf("Segundo n�mero: %d \n", numero2);
    printf("Terceiro n�mero: %d \n", numero3);

    if (numero1 >= numero2 && numero1 >= numero3)
    {
        maior = numero1;
    }
    else if (numero2 >= numero1 && numero2 >= numero3)
    {
        maior = numero2;
    }
    else if (numero3 >= numero2 && numero1 <= numero3)
    {
        maior = numero3;
    }

    if (numero1 <= numero2 && numero1 <= numero3)
    {
        menor = numero1;
    }
    else if (numero2 <= numero1 && numero2 <= numero3)
    {
        menor = numero2;
    }
    else if (numero3 <= numero2 && numero3 <= numero1)
    {
        menor = numero3;
    }

    printf("\n");
    printf("Maior n�mero: %d \n", maior);
    printf("Menor n�mero: %d \n", menor);

    return 0;
}