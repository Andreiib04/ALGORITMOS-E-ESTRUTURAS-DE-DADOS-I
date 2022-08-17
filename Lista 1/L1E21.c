#include <stdio.h>

int main()
{
    float mqg, formula;

    printf("Digite o comprimento em jardas:\t");
    scanf("%f", &mqg);

    formula = mqg * 0.91;
    printf("O valor em metros e: %.2f", formula);

    return 0;
}