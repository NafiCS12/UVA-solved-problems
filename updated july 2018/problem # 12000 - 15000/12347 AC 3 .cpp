#include <stdio.h>

typedef struct bstree {
    int value;
    struct bstree *leftChild;
    struct bstree *rightChild;
} BSTree;

BSTree* BSTInsert(BSTree *originalTree, int input)
{
    BSTree *newtree = new BSTree();
    newtree -> value = input;

    if (originalTree -> value == 0) {
        originalTree -> value = input;
    } else if (input < originalTree -> value) {
        if (originalTree -> leftChild == NULL) {
            originalTree -> leftChild = newtree;
        } else {
            BSTInsert(originalTree -> leftChild, input);
        }
    } else {
        if (originalTree -> rightChild == NULL) {
            originalTree -> rightChild = newtree;
        } else {
            BSTInsert(originalTree -> rightChild, input);
        }
    }
    return newtree;
}

void postOrder(BSTree *myTree) {
    if (myTree) {
        postOrder(myTree -> leftChild);
        postOrder(myTree -> rightChild);
        printf("%d\n", myTree -> value);
    }
}

int main()
{
    int numero;
    BSTree *arvore = new BSTree();

    while(scanf("%d", &numero) != EOF) {
        BSTInsert(arvore, numero);
    }

    postOrder(arvore);
    return 0;
}
