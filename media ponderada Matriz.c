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

char disciplina[3][250];
float notas[3][3];
int i, j;
float media[3];
float soma=0;

for(i=0; i<3; i++){
	printf("\nInforme a %dº disciplina: ", i+1);
	gets(disciplina[i]);
	
	fflush(stdin);
	
	for(j=0; j<3; j++){
		printf("Informe a %dº nota: ", j+1);
		scanf("%f", &notas[i][j]);
		
		if(j==0){
			notas[i][j] = notas[i][j]*3;
		}else if(j==1){
			notas[i][j] = notas[i][j]*3;
		}else if(j==2){
			notas[i][j] = notas[i][j]*4;
		}
		 soma+=notas[i][j];
	}
	fflush(stdin);
	media[i]=soma/10;
	soma=0;
}	

for(i=0; i<3; i++){
        for(j=0; j<3; j++){
		if(j==0){
			notas[i][j] = notas[i][j]/3;
		}else if(j==1){
			notas[i][j] = notas[i][j]/3;
		}else if(j==2){
			notas[i][j] = notas[i][j]/4;
		}
	}
}

system("cls || clear");                                                   

for(i=0; i<3; i++){
	printf("\n\nNome da disciplina: %s\n", disciplina[i]);
	
	for(j=0; j<3; j++){
		printf("%dº nota: %.1f\n", j+1, notas[i][j]);
	}
	
	printf("Média: %.2f", media[i]);
}

  return 0;
}

