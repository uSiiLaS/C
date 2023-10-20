#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int idade;
    int maiorIdade;
    int menorIdade;
    char sexo;
    float salario;
    float mediaSalario = 0;
    float soma = 0;
    int mulher = 0;
    int mulher5k = 0;
    int homem = 0;
    int codigo;

    printf("\n\tCÓDIGO\tDESCRIÇÃO\n");
    printf("\t1\tAdicionar Pessoa\n");
    printf("\t2\tSair e exibir resultado\n");
    printf("\n");
    printf("Digite o código desejado: \n");
    scanf("%d", &codigo);

    while (codigo != 2)
    {
        switch (codigo)
        {
        case 2:
            break;
        }

        printf("Informe a sua idade: ");
        scanf("%d", &idade);

        fflush(stdin);

        printf("Informe o seu sexo (M OU F): ");
        scanf("%s", &sexo);

        sexo = toupper(sexo);

        printf("Informe o seu salário: ");
        scanf("%f", &salario);

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        if (idade < menorIdade)
        {
            menorIdade = idade;
        }

        switch (sexo)
        {
        case 'F':
            mulher++;
            break;
        default:
            homem++;
            break;

            if (sexo == 'F' && salario >= 5000)
            {
                mulher5k++;
            }
        }

        printf("\n\tCÓDIGO\tDESCRIÇÃO\n");
        printf("\t1\tAdicionar Pessoa\n");
        printf("\t2\tSair e exibir resultado\n");
        printf("\n");
        printf("Digite o código desejado: \n");
        scanf("%d", &codigo);

        soma += salario;
    }

    system("cls || clear");

    mediaSalario = soma / (homem + mulher);

    printf("Média salarial do grupo: %.2f\n", mediaSalario);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Quantidades de mulheres com salário acima de 5 mil: %d\n", mulher5000);

    return 0;
}