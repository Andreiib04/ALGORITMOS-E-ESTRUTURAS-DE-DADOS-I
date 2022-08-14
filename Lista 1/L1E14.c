#include <stdio.h>

int main(){
    float angulo, formula;
    printf("Digite o angulo em radianos: ");
    
    scanf("%f", &angulo);

    formula=(angulo*180/3.14
    );

printf("O angulo em graus e: %.2f", formula);

    return 0;
}