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
int numeros[6];
int par=0;
int i;
int impar=0;

for(i=0; i<6; i++){
    printf("Informe o %dº número: \n", i+1);
    scanf("%d", &numeros[i]);
    
if(numeros[i] % 2 == 0){
    par++;
} else{
    impar++;
}

}

system("cls || clear");

for(i=0; i<6; i++){
    printf("%dº número: %d\n", i+1, numeros[i]);
}

printf("\nQuantidade de PARES: %d\n", par);
printf("Quantidade de IMPARES: %d\n", impar);

    return 0;
}
