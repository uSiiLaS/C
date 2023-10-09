#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    char sexo;
    float altura;
    float pesoIdeal;
    char seuSexo[250];

    // Solicitando informações
    printf("Informe o seu sexo: \n ");
    scanf("%c", &sexo);
    printf("Informe a sua altura: \n ");
    scanf("%f", &altura);

    sexo = toupper(sexo);

    // Condicional
    switch (sexo)
    {
    case 'M':
        pesoIdeal = (72.7 * altura) - 58;
        strcpy(seuSexo, "Masculino");
        break;

    case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        strcpy(seuSexo, "Feminino");
        break;

    default:
        printf("Op��o inv�lida...\n");
    }

    system("cls || clear");

    // Informando dados ao usuário
    printf("Sexo: %s \n", seuSexo);
    printf("Peso ideal: %.2f \n", pesoIdeal);

    return 0;
}