#include <stdio.h>

int main()
{
    int metrosc;
    float formula;

    printf("Digite o valor em metros cubicos:\t");
    scanf("%d", &metrosc);

    formula = (metrosc * 1000);
    printf("O valor em litros e: %.2f", formula);

    return 0;
}