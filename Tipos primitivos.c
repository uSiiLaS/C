#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20; // inteiro
    float peso = 80.2; // real
    char sexo = 'F'; // caractere
    char nome [250] = "Marta";

    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);
    return 0;
}