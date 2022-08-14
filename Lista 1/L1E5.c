#include <stdio.h>

int main(){
    float c, convertido;
    printf("Digite a temperatura que deseja converter: ");
    
    scanf("%f", &c);

    convertido= c*(9.0/5.0)+32.0;

printf("a temperatura em fahrenheit e: %.1f", convertido);
    return 0;
}