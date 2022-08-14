#include <stdio.h>

int main(){
    float velocidade, formula;
    printf("Digite a velocidade em Km/h: ");
    
    scanf("%f", &velocidade);

    formula=(velocidade/1.61);

printf("A velocidade em milhas e: %.2f", formula);

    return 0;
}