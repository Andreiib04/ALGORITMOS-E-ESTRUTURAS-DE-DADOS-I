#include <stdio.h>

int main()
{
    float mqg, formula;

    printf("Digite um valor de massa em quilogramas:\t");
    scanf("%f", &mqg);

    formula = mqg / 0.45;
    printf("O valor em libras e: %.2f", formula);

    return 0;
}