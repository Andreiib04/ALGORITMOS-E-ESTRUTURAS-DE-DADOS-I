#include <stdio.h>

int main(){
    float c, convertido;
    printf("Digite a temperatura Celsius que deseja converter: ");
    
    scanf("%f", &c);

    convertido=(c+273.15);

printf("a temperatura em Kelvin e: %.1f", convertido);
    return 0;
}