#include <stdio.h>

int main()
{
    float mqg, formula;

    printf("Digite o valor em hectares:\t");
    scanf("%f", &mqg);

    formula = mqg*1000;
    printf("O valor em metros quadrados e: %.2f", formula);

    return 0;
}