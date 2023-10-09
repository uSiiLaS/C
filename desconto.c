#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float valor;
    int pagamento;
    int parcela;
    float desconto;
    float valorDesconto;
    char formaPagamento[250];
    float valorTotal;
    float valorParcela;

    printf("Informe o valor do produto: \n");
    scanf("%f", &valor);
    printf("\n");
    printf("FORMA DE PAGAMENTO\n");
    printf("1. Pagamento à vista\n2. Pagamento à prazo\n");
    printf("Informe a forma de pagamento:");
    scanf("%d", &pagamento);

    switch (pagamento)
    {
    case 1:
        strcpy(formaPagamento, "À vista");
        desconto = 0.1;
        valorDesconto = valor * desconto;
        valorTotal = valor - valorDesconto;
        system("cls || clear");

        printf("Valor do produto: %.2f\n", valor);
        printf("Forma de pagamento: %s\n", formaPagamento);
        printf("Valor do desconto %.2f\n", valorDesconto);
        printf("Valor total: %.2f\n", valorTotal);
        break;
    case 2:
        strcpy(formaPagamento, "À prazo");

        do
        {
            printf("Digite a quantidade de parcelas:");
            scanf("%d", &parcela);

            if (parcela > 6)
            {

                printf("\nQuantidade de parcela inválida \n");
                printf("Tente novamente... \n\n");
            }

        } while (parcela > 6);

        valorParcela = valor / parcela;
        system("cls || clear");

        printf("Valor do produto: %.2f\n", valor);
        printf("Forma de pagamento: %s\n", formaPagamento);
        printf("Quantidade de parcelas: %d\n", parcela);
        printf("Valor por parcela: %.2f\n", valorParcela);
        printf("Valor total à prazo: %.2f\n", valor);
    }

    return 0;
}