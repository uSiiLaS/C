#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota[30];
    int i;

    for (i = 0; i < 30; i++)
    {
        printf("Informe a %d� nota: \n", i + 1);
        scanf("%f", &nota[i]);
    }

    for (i = 0; i < 30; i++)
    {
        printf("%d� nota: %.2f\n", i + 1, nota[i]);
    }

    return 0;
}
