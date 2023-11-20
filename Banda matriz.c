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

int
main ()
{
	
	setlocale(LC_ALL, "portuguese");
	
char nomeBanda [3][250];
char integrantes [3][5][250];
int i, j;

for(i=0; i<3; i++){
	printf("\nInforme o nome da %dº banda: ", i+1);
	gets(nomeBanda[i]);
	
	for(j=0; j<5; j++){
		printf("Informe o nome do %dº integrante da banda: ", j+1);
		gets(integrantes[i][j]);
	}
}

system("cls || clear");

for(i=0; i<3; i++){
	printf("\n%dº banda: %s\n", i+1, nomeBanda[i]);
	for(j=0; j<5; j++){
		printf("%dº integrante: %s\n", j+1, integrantes[i][j]);
	}
}






  return 0;
}

