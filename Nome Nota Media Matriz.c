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
	
	char nomes[3][250];
	float notas[3][3];
	float soma[3];
	float media[3][3];
	int i, j;
	
	for(i=0; i<3; i++){
		printf("\nInforme o nome: ");
		gets(nomes[i]);
		
		for(j=0; j<3; j++){
			printf("Informe a nota: ");
			scanf("%f", &notas[i][j]);
			soma[i]+=notas[i][j];
		}
		fflush(stdin);
		media[i][j]=soma[i]/j;
	}
	
	system("cls || clear");
	
	printf("\nExibindo resultados...\n");
	
	for(i=0; i<3; i++){
		printf("\nNome: %s\n", nomes[i]);
		
		for(j=0; j<3; j++){
			printf("Notas: %.1f\n", notas[i][j]);
		}
			printf("Média: %.1f\n", media[i][j]);
	}
	
  return 0;
}

