#include <stdio.h>
#include <stdlib.h>
//with help from https://www.programiz.com/dsa/binary-search-tree
//defining the structure

struct node{
	int key;
	struct node *left, *right;
};

//creating the node

struct node *new(int bleh){
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp->key = bleh;
	temp->left = temp->right = NULL;
	return temp;
}

//traversing

void trav(struct node *root){
	if(root != NULL){
		trav(root->left);	//traverses to the left subtree
		printf("%d ->", root->key);		//traverses the root
		trav(root->right);	//traverses to the right
	}
}


//node insertion

struct node *ins_node(struct node *node, int key){
	//for an empty subtree
	if(node==NULL) return new(key);
	//when insertion is performed to the right
	if(key<node->key) node->left = ins_node(node->left, key);
	else node -> right  = ins_node(node->right, key);
	return node;
}

//finding the next subtree

struct node *bleh2(struct node *node){
	struct node *now = node;

	while (now && now->left !=NULL)  now  = now ->left;
	return now;
}

//main func
int main(){
	struct node *root = NULL; //setting root as null
	printf("after traversal, root= ");
	trav(root);
}