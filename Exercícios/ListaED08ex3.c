#include <stdio.h>
#include <stdlib.h>

//3. Escreva uma função que conta o número de nós não-folha de uma árvore binária. 
// Definindo a estrutura do nó da árvore
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

// Função para contar o número de nós não-folha na árvore
int countNonLeafNodes(struct node* root){
    if (root == NULL || (root->left == NULL && root->right == NULL)){
        return 0;
    } else{
        return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
    }
}

int main(){
    // Criando a árvore de exemplo
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Contando o número de nós não-folha na árvore
    int numNonLeafNodes = countNonLeafNodes(root);

    // Imprimindo o resultado
    printf("A arvore tem %d nos nao-folha.\n", numNonLeafNodes);

    return 0;
}
