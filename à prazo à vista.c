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

    printf("Informe o valor do produto: \n");
    scanf("%f", &valor);
    printf("\n");
    printf("FORMA DE PAGAMENTO\n");
    printf("1. Pagamento à vista\n2. Pagamento à prazo\n");
    printf("Informe a forma de pagamento:\n ");
    scanf("%d", &pagamento);

    switch (pagamento)
    {
    case 1:
        strcpy(formaPagamento, "À vista")
            desconto = 10 / 100;
        valorDesconto = (valor * desconto);
        valorTotal = valor(valor * desconto);
        break;
    case 2:
        strcpy(formaPagamento, "À prazo")
            printf("Informe a quantidade de parcelas: ");
        scanf("%d", &parcela);
        if (parcela > 6)
        {
            printf("Quantidade de parcela inválida");
        }
    }

    printf("Valor do produto: %f", valor);
    printf("Forma de pagamento: %s", formaPagamento);
    printf("Valor do desconto %f", desconto);
    printf("Valor total: %f", valorTotal);

    return 0;
}