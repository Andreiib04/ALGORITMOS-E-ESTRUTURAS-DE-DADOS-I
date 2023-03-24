#include <stdio.h>
#include <stdlib.h>

//2. Escreva uma função que conta o número de nós de uma árvore binária

// Definindo a estrutura de um nó da árvore
struct node{
    int data;
    struct node* left;
    struct node* right;
};

// Função para criar um novo nó
struct node* newNode(int data){
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Função para contar o número de nós na árvore
int countNodes(struct node* root){
    if (root == NULL){
        return 0;
    } else{
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}

// Programa principal para testar a função
int main(){
    // Criando a árvore de exemplo
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Contando o número de nós na árvore
    int numNodes = countNodes(root);

    // Imprimindo o resultado
    printf("A arvore tem %d nos.\n", numNodes);

    return 0;
}
