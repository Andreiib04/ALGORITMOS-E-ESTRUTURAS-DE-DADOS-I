#include <stdio.h>

int main(){
float reais, dolar, cotacao;

printf("Digite a cotacao:\t");
scanf("%f", &dolar);

printf("Digite o valor que deseja converter:\t");
scanf("%f", &reais);

cotacao=reais*dolar;
printf("O valor na cotacao e: %.2f", cotacao);

    return 0;
}