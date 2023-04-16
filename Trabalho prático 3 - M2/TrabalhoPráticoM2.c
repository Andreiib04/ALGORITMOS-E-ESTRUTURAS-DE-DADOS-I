#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/*
Aluno: Andrei I. Bueno
Matrícula: 20202924
Trabalho Prático M2
*/
typedef struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;

TreeNode *novoNo(int val){
	TreeNode *no=(TreeNode*)malloc(sizeof(TreeNode));
	no->val = val;
	no->left = NULL;
	no->right = NULL;
	return no;
}
bool leafSimilar(TreeNode *root1, TreeNode *root2){
	if(root1==NULL && root2==NULL)
		return true;
	if(root1==NULL || root2==NULL)
		return false;

	TreeNode *stack1[1000];
	TreeNode *stack2[1000];
	int top1 = -1;
	int top2 = -1;

	stack1[++top1] = root1;
	stack2[++top2] = root2;

	while(top1>=0 && top2>=0){
		TreeNode *node1 = stack1[top1--];
		TreeNode *node2 = stack2[top2--];

		if(node1->left==NULL && node1->right==NULL &&
			node2->left==NULL && node2->right==NULL){
			if(node1->val != node2->val)
				return false;
		}
		else{
			if(node1->right)
				stack1[++top1] = node1->right;
			if(node1->left)
				stack1[++top1] = node1->left;
			if(node2->right)
				stack2[++top2] = node2->right;
			if(node2->left)
				stack2[++top2] = node2->left;
		}
	}
	return top1==-1 && top2==-1;
}
int main(){
	TreeNode *root1 = novoNo(6);
	root1->left = novoNo(7);
	root1->right = novoNo(4);
	root1->left->left = novoNo(9);
	root1->left->right = novoNo(8);

	TreeNode *root2 = novoNo(6);
	root2->left = novoNo(7);
	root2->right = novoNo(4);
	root2->left->left = novoNo(9);
	root2->left->right = novoNo(8);

	if(leafSimilar(root1, root2)){
		printf("Verdadeiro");
	}
	else{
		printf("Falso");
	}
	return 0;
}