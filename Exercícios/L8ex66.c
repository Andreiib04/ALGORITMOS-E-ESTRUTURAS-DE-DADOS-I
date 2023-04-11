#include <stdio.h>
#include <stdlib.h>

//Implementar uma função não-recursiva para calcular o tamanho de uma árvore biária.

//Definição da estrutura do nó da árvore binária
struct Node{
    int data; //Valor do nó
    struct Node* left; //Ponteiro para o filho esquerdo
    struct Node* right; //Ponteiro para o filho direito
};

//Função para criar um novo nó com um valor dado
struct Node* newNode(int data){
    struct Node*node=(struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

//Função não-recursiva para calcular o tamanho de uma árvore binária
int treeSize(struct Node* root){
    if (root == NULL){
        return 0;
    }

    int size = 0;
    struct Node* stack[1000];   
    int top = -1;               

    //Empilhar o nó raiz
    stack[++top] = root;

    while (top >= 0){
        struct Node* node = stack[top--]; //Desempilhar o nó atual

        size++; //Incrementar o tamanho

        //Empilhar os filhos direito e esquerdo do nó atual, se existirem
        if (node->right){
            stack[++top] = node->right;
        }
        if (node->left) {
            stack[++top] = node->left;
        }
    }
    return size;
}

int main(){
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    int size = treeSize(root);
    printf("Tamanho da arvore e de %d\n", size);
    return 0;
}
