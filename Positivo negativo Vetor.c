/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.,,,,,,

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main ()
{
float numeros[10];
int negativo=0;
int i;
float soma=0;

for(i=0; i<10; i++){
    printf("Informe o %dº número: \n", i+1);
    scanf("%f", &numeros[i]);
    
    if(numeros[i] < 0){
        negativo++;
    } else {
        soma+=numeros[i];
    }
}

system("cls || clear");

printf("Quantidade de números negativos: %d\n", negativo);
printf("Soma dos números positivos: %.2f\n", soma);

  return 0;
}
