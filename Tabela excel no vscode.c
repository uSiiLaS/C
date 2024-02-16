#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct produtoA
    {
        float mes[3];
        float vmd;
        float somaVMD;
        float Tr;
        float Emin;
        float Emax;
        float LoteReposi;
        float EstoqueAtual;
        char resultadoA[250];
    };

    struct produtoA A;

    int i;

    printf("===PRODUTO A===\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("Informe a venda do %dº mês: ", i + 1);
        scanf("%f", &A.mes[i]);

        A.somaVMD += A.mes[i];
    }

    printf("\nInforme o tempo de resposição do produto A: ");
    scanf("%f", &A.Tr);

    printf("\nInforme o lote de reposição: ");
    scanf("%f", &A.LoteReposi);

    printf("\nInforme o estoque atual: ");
    scanf("%f", &A.EstoqueAtual);

    A.vmd = (A.somaVMD / 3) / 25;
    A.Emin = A.vmd * A.Tr;
    A.Emax = A.Emin + A.LoteReposi;
    A.EstoqueAtual > A.Emin ? strcpy(A.resultadoA, "Não comprar") : strcpy(A.resultadoA, "Comprar");

    system("cls || clear");

    struct produtoB
    {
        float mes[3];
        float vmd;
        float somaVMD;
        float Tr;
        float Emin;
        float Emax;
        float LoteReposi;
        float EstoqueAtual;
        char resultadoA[250];
    };

    struct produtoA B;

    printf("===PRODUTO B===\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("Informe a venda do %dº mês: ", i + 1);
        scanf("%f", &B.mes[i]);

        B.somaVMD += B.mes[i];
    }

    printf("\nInforme o tempo de resposição do produto A: ");
    scanf("%f", &B.Tr);

    printf("\nInforme o lote de reposição: ");
    scanf("%f", &B.LoteReposi);

    printf("\nInforme o estoque atual: ");
    scanf("%f", &B.EstoqueAtual);

    B.vmd = (B.somaVMD / 3) / 25;
    B.Emin = B.vmd * B.Tr;
    B.Emax = B.Emin + B.LoteReposi;
    B.EstoqueAtual > B.Emin ? strcpy(B.resultadoA, "Não comprar") : strcpy(B.resultadoA, "Comprar");

    system("cls || clear");

    struct produtC
    {
        float mes[3];
        float vmd;
        float somaVMD;
        float Tr;
        float Emin;
        float Emax;
        float LoteReposi;
        float EstoqueAtual;
        char resultadoA[250];
    };

    struct produtoA C;

    printf("===PRODUTO C===\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("Informe a venda do %dº mês: ", i + 1);
        scanf("%f", &C.mes[i]);

        C.somaVMD += C.mes[i];
    }

    printf("\nInforme o tempo de resposição do produto A: ");
    scanf("%f", &C.Tr);

    printf("\nInforme o lote de reposição: ");
    scanf("%f", &C.LoteReposi);

    printf("\nInforme o estoque atual: ");
    scanf("%f", &C.EstoqueAtual);

    C.vmd = (C.somaVMD / 3) / 25;
    C.Emin = C.vmd * C.Tr;
    C.Emax = C.Emin + C.LoteReposi;
    C.EstoqueAtual > C.Emin ? strcpy(C.resultadoA, "Não comprar") : strcpy(C.resultadoA, "Comprar");

    system("cls || clear");

    struct produtoD
    {
        float mes[3];
        float vmd;
        float somaVMD;
        float Tr;
        float Emin;
        float Emax;
        float LoteReposi;
        float EstoqueAtual;
        char resultadoA[250];
    };

    struct produtoA D;

    printf("===PRODUTO D===\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("Informe a venda do %dº mês: ", i + 1);
        scanf("%f", &D.mes[i]);

        D.somaVMD += D.mes[i];
    }

    printf("\nInforme o tempo de resposição do produto A: ");
    scanf("%f", &D.Tr);

    printf("\nInforme o lote de reposição: ");
    scanf("%f", &D.LoteReposi);

    printf("\nInforme o estoque atual: ");
    scanf("%f", &D.EstoqueAtual);

    D.vmd = (D.somaVMD / 3) / 25;
    D.Emin = D.vmd * D.Tr;
    D.Emax = D.Emin + D.LoteReposi;
    D.EstoqueAtual > D.Emin ? strcpy(D.resultadoA, "Não comprar") : strcpy(D.resultadoA, "Comprar");

    system("cls || clear");

    printf("===PRODUTO A===\n\n");

    printf("Venda média mensal: %.2f\n", A.vmd);
    printf("Estoque mínimo: %.2f\n", A.Emin);
    printf("Estoque máximo: %.2f\n", A.Emax);
    printf("Decisão: %s\n\n", A.resultadoA);

    printf("===PRODUTO B===\n\n");

    printf("Venda média mensal: %.2f\n", B.vmd);
    printf("Estoque mínimo: %.2f\n", B.Emin);
    printf("Estoque máximo: %.2f\n", B.Emax);
    printf("Decisão: %s\n\n", B.resultadoA);

    printf("===PRODUTO C===\n\n");

    printf("Venda média mensal: %.2f\n", C.vmd);
    printf("Estoque mínimo: %.2f\n", C.Emin);
    printf("Estoque máximo: %.2f\n", C.Emax);
    printf("Decisão: %s\n\n", C.resultadoA);

    printf("===PRODUTO D===\n\n");

    printf("Venda média mensal: %.2f\n", D.vmd);
    printf("Estoque mínimo: %.2f\n", D.Emin);
    printf("Estoque máximo: %.2f\n", D.Emax);
    printf("Decisão: %s", D.resultadoA);

    return 0;
}