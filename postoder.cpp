void post_order(Tree T) {
    if (T != NULL) {
        post_order(T->left);
        post_order(T->right);
        printf("%d ", T->key);
    }
}
	
