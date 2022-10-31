// Binary Search Trees

struct nodeType {
	int val;
	struct nodeType * left;  // smaller
	struct nodeType * right; // larger
};

typedef struct nodeType * NodeAddress;

/*

4, left: 2, right: 7

2, left: 1, right: 3

7, left: 5, right: 9

1, 3, 5, 9 -> left: NULL, right: NULL

*/

NodeAddress search(NodeAddress root, int val) {
	if(root==NULL) return NULL;

	if      ( val < root->val ) { return search(root->left , val);}
	else if ( val > root->val ) { return search(root->right, val);}
	else                        { return root;}
}

NodeAddress search2(NodeAddress root, int val) {
	return root?((val==root->val)? root : (  ( val < root->val )? search2(root->left , val): search2(root->right, val)  ) ): NULL;
}

NodeAddress insert(NodeAddress root, int val) {
	if(root==NULL) {return createNode(val);}

	if      ( val < root->val ) { root->left  = insert(root->left , val);}
	else if ( val > root->val ) { root->right = insert(root->right, val);}

	return root;
}

NodeAddress insert2(NodeAddress root, int val) {
	if(root==NULL) {return createNode(val);}

	if ( val < root->val ) { 
		if(root->left) return insert2(root->left, val);
		else root->left = createNode(val);
		return root->left;
	}
	else if ( val > root->val ) { 
		if(root->right) return insert2(root->right, val);
		else root->right = createNode(val);
		return root->right;
	}
	
	return root;
}

void inorder(NodeAddress root) {
	if( root->left )  { inorder(root->left);       }
	if( root )        { printf(" %s ", root->val); }
	if( root->right ) { inorder(root->right);      }
}