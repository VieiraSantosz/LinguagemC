#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");
    
     float sa, nsa;

      printf ("Reajuste de sal�rio. \n");
      printf ("\n Digite seu sal�rio:");
      scanf ("%f", &sa);

      if (sa < 500) {
          nsa = sa * 1.15;
          printf ("Reajuste do seu sal�rio (menor que 500): %.2f \n", nsa);
      }
       else if (sa > 1000) {
          nsa = sa * 1.05;
          printf ("Reajuste do seu sal�rio (maior que 1000): %.2f \n", nsa);
       }
        else {
            nsa = sa * 1.10;
          printf ("Reajuste do seu sal�rio (entre 500 e 1000): %.2f \n", nsa);
        }

return (0);
 
 }