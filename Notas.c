#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese") ;

   float nota1=0, nota2=0, media=0;

   printf ("Digite nota da primeira prova...\n") ;
   scanf ("%f", &nota1) ;
   printf ("Digite nota da segunda prova...\n") ;
   scanf ("%f", &nota2) ;
   media = (nota1 + nota2) / 2 ;
   printf ("A média do aluno é... %.2f\n", media) ;

   return 0 ;

}
