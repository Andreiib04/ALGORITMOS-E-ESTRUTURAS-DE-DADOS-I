#include <stdio.h>

int main(){
    float angulo, formula;
    printf("Digite o angulo em graus: ");
    
    scanf("%f", &angulo);

    formula=(angulo*3.14/180);

printf("O angulo em radianos e: %.2f", formula);

    return 0;
}