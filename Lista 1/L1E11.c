#include <stdio.h>

int main(){
    float velocidade, formula;
    printf("Digite a velocidade em milhas: ");
    
    scanf("%f", &velocidade);

    formula=(velocidade*1.61
    );

printf("A velocidade em Km/h e: %.2f", formula);

    return 0;
}