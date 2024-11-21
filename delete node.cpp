Tree delete_node(int x, Tree T) {
    if (T == NULL) {
        return NULL; 
    }

    if (x < T->key) {
        T->left = delete_node(x, T->left);
    } else if (x > T->key) {
        T->right = delete_node(x, T->right);
    } else {
        if (T->left == NULL) {
            Tree temp = T->right;
            free(T); 
            return temp;
        } else if (T->right == NULL) {
            Tree temp = T->left;
            free(T); 
            return temp;
        } else {
            Tree temp = T->right;
            while (temp->left != NULL) {
                temp = temp->left;
            }
            T->key = temp->key;
            T->right = delete_node(temp->key, T->right);
        }
    }
    return T; 
}
