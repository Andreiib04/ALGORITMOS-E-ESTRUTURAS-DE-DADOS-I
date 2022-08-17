#include <stdio.h>

int main()
{
    float litros, formula;

    printf("Digite o valor em litros:\t");
    scanf("%f", &litros);

    formula =litros/1000;
    printf("O valor em metros cubicos e: %.2f", formula);

    return 0;
}