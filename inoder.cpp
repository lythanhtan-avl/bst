void in_order(Tree T) {
    if (T != NULL) {
        in_order(T->left);
        printf("%d ", T->key);
        in_order(T->right);
    }
}

