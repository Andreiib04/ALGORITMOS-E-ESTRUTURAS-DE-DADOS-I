#include <stdio.h>

int main(){
    float p, formula;
    printf("Digite o comprimento em polegadas: ");
    
    scanf("%f", &p);

    formula=(p*2.54);

printf("O comprimento em cm e: %.2f", formula);

    return 0;
}