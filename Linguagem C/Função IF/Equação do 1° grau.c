#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

      float a, b, x;

      printf ("Digite o valor de *a*:");
      scanf ("%f", &a);

      printf ("Digite o valor de *b*:");
      scanf ("%f", &b);

      if (a == 0) {
         printf (" \n N�O � POSS�VEL CALCULAR.");
         printf (" \n Motivo - A = 0");
     }

      x = (-b) / a;
      printf ("\n Raiz da equa��o: %.2f \n", x);

return (0);

 }