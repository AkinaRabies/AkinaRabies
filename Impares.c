#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int num[100], n , i ;

    printf ("Digite numero de elementos...\n") ;
    scanf ("%d", &n) ;

    for (i = 1; i <= n; i++) {

    printf ("Digite elementos...\n") ;
    scanf ("%d", &num[i]) ;

    }

    for (i = 1; i <= n; i++) {

     if(num[i]%2!=0)

        printf ("Números ímpares...: %d\n", num[i]) ;

    }

    return 0 ;


}
