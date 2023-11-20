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
	
  char nomes[2][250];
  float notas[2][3];
  int i, j;

  for (i = 0; i < 2; i++){
      printf("\nInforme o nome do aluno: \n");
      gets(nomes[i]);
      
      for(j=0; j<3; j++){
          printf("Informe a nota do aluno: \n");
          scanf("%f", &notas[i][j]);
      }
      fflush(stdin);
  }
  
  system("cls || clear");
  
  printf("\nExibindo resultados... \n");
  
  for (i = 0; i < 2; i++){
      printf("\n%s\n", nomes[i]);
      
      for(j=0; j<3; j++){
          printf("- %dº nota: %.1f\n", j+1, notas[i][j]);
      }
  }

  return 0;
}

