#include <stdio.h>
#include <locale.h>
#include <math.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

      float num, exp, pot;
      float prog;

       printf ("Digite seu n�mero:");
       scanf ("%f", &num);

       printf ("Digite at� qual pot�ncia deseja:");
       scanf ("%f", &prog);

        for (exp = 0; exp <= prog; exp++)
        {
            pot = pow (num, exp);
            printf ("%.f elevado a %.f = %.f \n", num, exp, pot);
        }


 }