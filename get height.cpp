int get_height(Tree T) {
    if (T == NULL) {
        return -1; 
    }
    int left_height = get_height(T->left);
    int right_height = get_height(T->right);
    return 1 + (left_height > right_height ? left_height : right_height);
}

