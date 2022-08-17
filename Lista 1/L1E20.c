#include <stdio.h>

int main()
{
    float mqg, formula;

    printf("Digite um valor em libras:\t");
    scanf("%f", &mqg);

    formula = mqg * 0.45;
    printf("O valor em quilogramas e: %.2f", formula);

    return 0;
}