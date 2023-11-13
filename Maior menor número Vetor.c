/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
int numeros[5];
int i;
int menor = 9999;
int maior=0;

for(i=0; i<5; i++){
     printf("Informe o %dº número: ", i+1);
     scanf("%d", &numeros[i]);
     
     maior = maior > numeros[i] ? maior : numeros[i];
     menor = menor < numeros[i] ? menor : numeros[i];
}

system("cls || clear");

for(i=0; i<5; i++){
    printf("%dº número: %d\n", i+1, numeros[i]);
}

printf("\nMenor número: %d\n", menor);
printf("Maior número: %d", maior);

    return 0;
}
