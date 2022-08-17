#include <stdio.h>

int main()
{
    float mqg, formula;

    printf("Digite o valor em acres:\t");
    scanf("%f", &mqg);

    formula = mqg*4048.58;
    printf("O valor em metros quadrados e: %.2f", formula);

    return 0;
}