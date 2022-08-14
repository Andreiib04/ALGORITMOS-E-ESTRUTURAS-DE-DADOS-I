#include <stdio.h>

int main(){
    float velocidade, formula;
    printf("Digite a velocidade em Km/h: ");
    
    scanf("%f", &velocidade);

    formula=(velocidade/3.6);

printf("A velocidade em m/s e: %.2f", formula);

    return 0;
}