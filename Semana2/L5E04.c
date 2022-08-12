//Nome: Andrei Bueno
//4. faça um programa que leia um nome e imprima as 4 primeiras letras do nome.

#include <stdlib.h> 
#include <stdio.h> 

main(){ 
char nome[30]; 
int i; 
    printf ("Digite um nome:"); 
    gets(nome); 

for(i=0;i<=3;i++) 
    printf("%c",nome[i]);  

return (0); 
}