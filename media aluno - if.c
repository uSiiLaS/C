#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1 = 0;
    float nota2 = 0;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        printf("Aluno aprovado! \n");
    }
    else
    {
        printf("Aluno reprovado! \n");
    }

    // informando dados
    printf("Media: %.2f \n", media);
}
