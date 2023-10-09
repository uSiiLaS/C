#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    for (i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}