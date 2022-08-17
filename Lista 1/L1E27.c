#include <stdio.h>

int main()
{
   int x, y, z, formula;
   printf("Digite o valor 1:\t");
   scanf("%d",&x);
    printf("Digite o valor 2:\t");
   scanf("%d",&y);
    printf("Digite o valor 3:\t");
   scanf("%d",&z);
formula= (x*x)+(y*y)+(z*z);
printf("A soma dos quadrados dos 3 valores e: %d", formula);
    return 0;
}