#include <stdio.h>

int main(){
    float c, convertido;
    printf("Digite a temperatura Kelvin que deseja converter: ");
    
    scanf("%f", &c);

    convertido=(c-273.15);

printf("a temperatura em Celsius e: %.1f", convertido);
    return 0;
}