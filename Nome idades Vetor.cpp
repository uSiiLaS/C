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

int
main ()
{
  char nomes[5] [999] ;
  int idades[5];
  int i;

  for (i = 0; i < 5; i++)
    {
      printf ("%dº: Pessoa!\n", i + 1);

      fflush (stdin);

      printf ("Informe o seu nome: \n");
      gets(nomes[i]);
     
       fflush (stdin);

      printf ("Informe a sua idade: \n");
      scanf ("%d", &idades[i]);

      fflush (stdin);

      system ("cls || clear");

    }

  system ("cls || clear");

  for (i = 0; i < 5; i++)
    {

      printf ("%dº: Pessoa!\n", i + 1);

      printf ("Nome: %s\n", nomes[i]);

      printf ("Idade: %d\n\n", idades[i]);
    }

  return 0;
}

