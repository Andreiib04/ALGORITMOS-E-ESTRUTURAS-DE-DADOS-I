#include <stdio.h>

int main()
{
    int valor, mais, menos;

    printf("Digite um valor:");
    scanf("%d", &valor);

    mais = (valor + 1);
    menos = (valor - 1);

    printf("O valor menor que o numero digita e %d, e o maior e %d.", menos, mais);

    return 0;
}