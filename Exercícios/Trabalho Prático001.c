#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que solicita do usuário uma série de números, cada número pode ser um
int, float ou double. Antes de solicitar o número pergunte qual tipo de dado o usuário vai entrar.
Todos os números entrados devem ser armazenados num buffer único. Esse buffer deve ter tamanho
dinâmico e não deve desperdiçar memória, por exemplo, alocar sempre espaço para um double
quando o usuário inserir um int ou float.

Você não deve solicitar para o usuário quantos números ele deseja entrar, na escolha do tipo
de dados coloque uma opção para parar a entrada da série de números. Após isso você deve imprimir
todos os números do buffer, primeiro toda a série em sequência depois novamente, mas primeiro os
ints seguido dos floats e doubles.
*/
int main() {
    int *vetor, tamanho, i, numero, encontrado = 0;
    
    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    // Aloca dinamicamente o vetor com o tamanho informado pelo usuário
    vetor = (int*) malloc(tamanho * sizeof(int));
    
    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }
    
    // Gera números aleatórios e preenche o vetor
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com a hora atual
    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand();
    }
    
    // Imprime o vetor na tela
    printf("Vetor gerado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    // Solicita ao usuário um número inteiro para busca e remoção
    printf("Digite um número inteiro para buscar e remover do vetor: ");
    scanf("%d", &numero);
    
    // Busca o número no vetor e remove se for encontrado
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        // Remove o número do vetor e encolhe o vetor
        for (; i < tamanho - 1; i++) {
            vetor[i] = vetor[i+1];
        }
        tamanho--;
        vetor = (int*) realloc(vetor, tamanho * sizeof(int));
        if (vetor == NULL) {
            printf("Erro ao alocar memória\n");
            return 1;
        }
        // Imprime o vetor atualizado na tela
        printf("Vetor atualizado:\n");
        for (i = 0; i < tamanho; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("Número não encontrado no vetor\n");
    }
    
    // Libera a memória alocada para o vetor
    free(vetor);
    
    return 0;
}
