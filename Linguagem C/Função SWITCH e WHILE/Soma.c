#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

      int A, B, C;
      
      do
      {
          printf ("Digite o primeiro n�mero:");
          scanf ("%d", &A);

          printf ("Digite o segundo n�mero:");
          scanf ("%d", &B);

          C = A + B;
          printf ("\n Soma dos dois n�meros = %d \n", C);

          //system ("pause");
          //printf ("Pressione qualquer para continuar a opera��o... \n");
          //getch();
          //system ("cls");
      } while (A != 0 && B != 0);
    
return (0);

 }