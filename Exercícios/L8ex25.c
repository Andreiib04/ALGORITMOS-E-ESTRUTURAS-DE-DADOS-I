#include <stdio.h>
#include <stdlib.h>

//Escreva uma função não-recursiva que retorne o menor valor de uma árvore binária (não ordenada)

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int findMin(struct Node* root){
    if (root == NULL) {
        printf("A arvore esta vazia.\n");
        return -1;
    }

    while (root->left != NULL){
        root = root->left; 
    }

    return root->data; 
}

int main(){
    struct Node* root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    root->right->left = newNode(6);
    root->right->right = newNode(9);

    int min = findMin(root);

    if (min != -1){
        printf("O menor valor na arvore eh: %d\n", min);
    }

    return 0;
}
