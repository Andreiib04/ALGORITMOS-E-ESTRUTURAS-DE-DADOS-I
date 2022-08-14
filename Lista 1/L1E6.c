#include <stdio.h>

int main(){
    float f, convertido;
    printf("Digite a temperatura que deseja converter: ");
    
    scanf("%f", &f);

    convertido=5.0*(f-32.0)/9.0;

printf("a temperatura em celsius e: %.1f", convertido);
    return 0;
}