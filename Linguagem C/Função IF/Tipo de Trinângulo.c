#include <stdio.h>
#include <locale.h>

 int main () {
     setlocale (LC_ALL, "Portuguese");

    int l1, l2, l3;

     printf ("Digite o lado 1:");
     scanf ("%d", &l1);
     
     printf ("Digite o lado 2:");
     scanf ("%d", &l2);

     printf ("Digite o lado 3:");
     scanf ("%d", &l3);

     if (l1 + l2 > l3 && l1 + l3 > l2 && l3 + l2 > l1) {
         printf (" \n � UM TRI�NGULO!");

         if (l1 != l2 && l1 != l3 && l2 != l3) {
            printf (" \n Trin�ngulo ESCALENO \n");
         }

           else if (l1 == l2 && l1 == l3 && l2 == l3) {
            printf (" \n Trin�ngulo EQUILATERO");
         }  

                else {
                    printf (" \n Trin�ngulo IS�SCELES");
                }

     } else {
         printf (" \n N�O FORMA UM TRIN�NGULO. \n");
     }

return (0);

 }