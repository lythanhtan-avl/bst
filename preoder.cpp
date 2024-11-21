void pre_order(Tree T) {
    if (T != NULL) {

        printf("%d ", T->key);
        pre_order(T->left);
        pre_order(T->right);
    }
}
