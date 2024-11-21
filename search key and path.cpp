void print_path(int x, Tree T) {
    while (T != NULL) {
        printf("%d ", T->key);
        if (T->key == x) {
            printf(" --> Tim thay\n");
            return;
        }
        if (x < T->key) {
            T = T->left;
        }
        else {
            T = T->right;
        }
    }
    printf(" --> Tim khong thay\n");
}

