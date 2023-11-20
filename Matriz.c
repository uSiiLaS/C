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
	
  int numeros[2][2];
  int s, b;

  for (s = 0; s < 2; s++){
      for (b = 0; b < 2; b++)
	{
	  printf ("Informe o elemento da %dº linha e %dº coluna: ", s + 1, b + 1);
	  scanf ("%d", &numeros[s][b]);
	}
  }

  printf ("\n");

  for (s = 0; s < 2; s++){
  for (b = 0; b < 2; b++){
      printf ("Elemento da %dº linha e %dº coluna: %d\n", s + 1, b+1, numeros[s][b]);
    }
  }

  return 0;
}

