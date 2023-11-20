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
	
	char materia[3][250];
	float notas[3][2];
	float soma=0;
	float media[3];
	char resultado[3][250];
	int i, j;
	
	for(i=0; i<3; i++){
		printf("Informe o nome da %dº disciplina: ", i+1);
		gets(materia[i]);
		
		for(j=0; j<2; j++){
			printf("Informe a %dº nota: ", j+1);
			scanf("%f", &notas[i][j]);
			
			soma+=notas[i][j];
		}
		
		printf("\n");
		
		fflush(stdin);
		media[i]=soma/j;
		soma=0;
		
		if(media[i] >= 7){
			strcpy(resultado[i], "Aprovado!");
		} else if(media[i] >= 5){
			strcpy(resultado[i], "Recuperação!");
		} else {
			strcpy(resultado[i], "Reprovado!");
		}
	}
	
	system("cls || clear");
	
	
	
	for(i=0; i<3; i++){
		printf("\nNome da disciplina: %s\n", materia[i]);
		
		for(j=0; j<2; j++){
			printf("%dº nota: %.1f\n", j+1, notas[i][j]);
		}
		
		printf("Média: %.1f\n", media[i]);
		printf("%s\n", resultado[i]);
		
	}

  return 0;
}

