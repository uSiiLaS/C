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
float notas[4];
float soma=0;
float media;
char resultado[250];
int i;

for(i=0; i<4; i++){
    printf("Digite a %dº nota: \n", i+1);
    scanf("%f", &notas[i]);
   
   soma+=notas[i];
}

system("cls || clear");

media=soma/i;

for(i=0; i<4; i++){
    printf("%dº nota: %.2f\n", i+1, notas[i]);
}

if(media>=7){
    strcpy(resultado, "Aprovado!");
} else if (media>=5){
    strcpy(resultado, "Recuperação!");
} else if (media<5){
    strcpy(resultado, "Reprovado!");
}

printf("\nMédia: %.2f\n", media);
printf("%s", resultado);

    return 0;
}
