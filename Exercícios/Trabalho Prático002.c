#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que solicita do usuário o tamanho de um vetor. Crie um vetor com esse
tamanho, utilizando memória dinâmica, onde números inteiros serão armazenados. Preencha esse
vetor com números inteiros gerados com a função “int rand()” e imprima o vetor. Em seguida solicite
um número inteiro do usuário. O programa deve procurar esse número dentro do vetor e indicar se
foi encontrado ou não. Caso encontre o número esse deve ser removido do vetor e o vetor deve
encolher. Caso não encontre procure dois números que somados geram o número sendo buscado,
caso encontrado ambos devem ser impressos na tela e removidos do vetor e esse deve encolher.

Todas essas operações devem ser feitas com notação de ponteiros (aritmética de ponteiros)
e não com notação de vetores (vetor[10], por exemplo).

Encontra-se incompleto
*/
int main() {
    int type, count = 0, max_count = 1;
    void *buffer = malloc(max_count * sizeof(double)); // começamos alocando espaço para um double
    double *ptr = buffer;
    
    while(1) {
        printf("Digite o tipo de dado (1-Int, 2-Float, 3-Double, 4-Parar): ");
        scanf("%d", &type);
        
        if(type == 4) break; // se o usuário escolheu 4, encerramos o loop
        
        printf("Digite o numero: ");
        
        if(count == max_count) { // se atingimos o limite do buffer, realocamos mais espaço
            max_count *= 2;
            buffer = realloc(buffer, max_count * sizeof(double)); // realocamos como double, mas podemos usar com qualquer tipo
            ptr = buffer + count * sizeof(double); // atualizamos o ponteiro para a próxima posição
        }
        
        switch(type) {
            case 1: {
                int num;
                scanf("%d", &num);
                *(int*)ptr = num; // armazenamos o número como int, mas com casting para void*
                ptr += sizeof(int); // atualizamos o ponteiro para a próxima posição
                break;
            }
            case 2: {
                float num;
                scanf("%f", &num);
                *(float*)ptr = num; // armazenamos o número como float, mas com casting para void*
                ptr += sizeof(float); // atualizamos o ponteiro para a próxima posição
                break;
            }
            case 3: {
                double num;
                scanf("%lf", &num);
                *ptr = num; // armazenamos o número como double, mas com casting para void*
                ptr += sizeof(double); // atualizamos o ponteiro para a próxima posição
                break;
            }
            default:
                printf("Tipo invalido!\n");
        }
        count++;
    }
    
    // imprimindo todos os números do buffer
    printf("Sequencia: ");
    for(int i = 0; i < count; i++) {
        switch(type) {
            case 1:
                printf("%d ", *((int*)buffer + i));
                break;
            case 2:
                printf("%.2f ", *((float*)buffer + i));
                break;
            case 3:
                printf("%.2lf ", *((double*)buffer + i));
                break;
        }
    }
    printf("\n");
    
    // imprimindo os números do buffer com inteiros seguidos dos floats e doubles
    printf("Inteiros: ");
    for(int i = 0; i < count; i++) {
        if(type == 1) printf("%d ", *((int*)buffer + i));
    }
    printf("\n");
    
    printf("Floats: ");
    for(int i = 0; i < count; i++) {
        if(type == 2) printf("%.2f ", *((float*)buffer + i));
    }
    printf("\n");
    
    printf("Doubles: ");
    for(int i = 0; i < count; i++) {
        if(type == 3) printf("%.2lf ", *((double*)buffer + i));
    }
    printf("\n");
    
    free(buffer); // liberando a memória alocada
    
    return 0;
}
