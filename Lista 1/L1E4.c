#include <stdio.h>
#include <stdlib.h>

int main (void) {
   double valor, quintaParte;
   printf ("Digite um numero: \n");

   scanf ("%lf", &valor);

   quintaParte = valor * 1/5;
   printf ("A quinta parte eh:%lf\n",quintaParte);

   return 0;
}