#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int par;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    return 0;
}