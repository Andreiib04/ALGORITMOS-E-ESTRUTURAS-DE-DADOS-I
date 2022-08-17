#include <stdio.h>

int main()
{
    float mqg, formula;

    printf("Digite o valor em metros quadrados:\t");
    scanf("%f", &mqg);

    formula = mqg*0.00247;
    printf("O valor em acres e: %f", formula);

    return 0;
}