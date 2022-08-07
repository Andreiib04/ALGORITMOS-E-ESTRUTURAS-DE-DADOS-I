#include <stdio.h>
#include <stdlib.h>

/* ListaC04, exercício 8. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.*/
int main()
{
   int i, num[6];
   printf("Digite 6 numeros inteiros.\n");
   for(i=0; i<6; i++) {
    scanf("%d", &num[i]);
   }

   printf("Valores inversos:\n");
   for(i=5; i>=0; i--) {
    printf("%d\n", num[i]);
   }
   return 0;
}
