#include <stdio.h>

int main(){
    float velocidade, formula;
    printf("Digite a velocidade em m/s: ");
    
    scanf("%f", &velocidade);

    formula=(velocidade*3.6);

printf("A velocidade em Km/h e: %.2f", formula);

    return 0;
}