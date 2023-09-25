#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome[250];

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("Informe o seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // limpa cache de input

    printf("Informe o seu sexo: ");
    scanf("%c", &sexo);

    fflush(stdin); // limpa cache de input

    printf("Informe o seu nome: ");
    // scanf("%s", &nome);
    // fgets(nome, 250, stdin);
    gets(nome);

    // Informando dados ao usuário
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);
    return 0;
}