#include <stdio.h>

int main()
{
    float mqg, formula;

    printf("Digite o valor em metros quadrados:\t");
    scanf("%f", &mqg);

    formula = mqg*0.0001;
    printf("O valor em hectares e: %.2f", formula);

    return 0;
}