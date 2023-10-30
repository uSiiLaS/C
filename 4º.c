#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int idade;
    char resultado[250];

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18 || idade > 65)
    {
        strcpy(resultado, "Não é obrigado a votar!");
    }
    else
    {
        strcpy(resultado, "É obrigado a votar!");
    }

    system("cls || clear");

    printf("Idade: %d\n", idade);
    printf("%s\n", resultado);

    return 0;
}