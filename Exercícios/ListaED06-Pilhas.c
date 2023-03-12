#include <stdio.h>
#include <stdlib.h>

//Desenvolva uma função para testar se duas pilhas P1 e P2 são iguais.

#define MAX 50 // tamanho máximo da pilha

typedef struct {
    int topo;
    int itens[MAX];
} Pilha;

// Inicializa a pilha
void inicializar(Pilha *p){
    p->topo = -1;
}

// Verifica se a pilha está vazia
int esta_vazia(Pilha *p){
    return p->topo == -1;
}

// Verifica se a pilha está cheia
int esta_cheia(Pilha *p){
    return p->topo == MAX - 1;
}

// Insere elementos
void empilhar(Pilha *p, int valor){
    if (esta_cheia(p)){
        printf("Erro: a pilha está cheia\n");
        exit(1);
    }
    p->topo++;
    p->itens[p->topo] = valor;
}

// Remove elementos
int desempilhar(Pilha *p){
    if (esta_vazia(p)) {
        printf("Erro: a pilha está vazia\n");
        exit(1);
    }
    int valor = p->itens[p->topo];
    p->topo--;
    return valor;
}

// Verifica o elemento do topo
int topo(Pilha *p){
    if (esta_vazia(p)) {
        printf("Erro: a pilha está vazia\n");
        exit(1);
    }
    return p->itens[p->topo];
}

// Testa se as pilhas são iguais
int sao_iguais(Pilha *p1, Pilha *p2){
    if (p1->topo != p2->topo){
        return 0;
    }
    for (int i = 0; i <= p1->topo; i++){
        if (p1->itens[i] != p2->itens[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    Pilha p1, p2;
    inicializar(&p1);
    inicializar(&p2);

    int n, valor;

    printf("Digite o numero de valores da pilha 1: ");
    scanf("%d", &n);
    printf("Digite os valores da pilha 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        empilhar(&p1, valor);
    }

    printf("Digite o numero de valores da pilha 2: ");
    scanf("%d", &n);
    printf("Digite os valores da pilha 2:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &valor);
        empilhar(&p2, valor);
    }

    if (sao_iguais(&p1, &p2)){
        printf("As pilhas sao iguais\n");
    } else{
        printf("As pilhas nao sao iguais\n");
    }

    return 0;
}
