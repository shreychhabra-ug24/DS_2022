//incomplete code
struct node *remove(struct node *root, int key)
{
	if(root==NULL) return root;

	if (key<root->key)
		root->left = remove(root->left, key);
	else if (key>root->key)
		root->right = remove(root->right, key);
	else{
		
	}
}