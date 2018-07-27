#include <cstdio>
using namespace std;

struct Tree
{
    int val = 0;
    Tree *L = NULL;
    Tree *R = NULL;
};

Tree *Insert(Tree *H, int node)
{
    Tree *N = new Tree;
    N->val = node;

    if (H == NULL)
        return N;

    Tree *T = H, *nxt = H;

    while (nxt != NULL)
    {
        T = nxt;
        if (node > nxt->val)
            nxt = nxt->R;
        else
            nxt = nxt->L;
    }

    if (node > T->val)
           T->R = N;
    else
            T->L = N;
    return H;
}

void Post_Order(Tree *Root)
{
    if (Root == NULL)
        return;
    Post_Order(Root->L);
    Post_Order(Root->R);
    printf("%d\n", Root->val);
}

int main()
{
    Tree *MyBSTree = NULL;
    int node;
    while (scanf("%d", &node) != EOF)
    {

         MyBSTree = Insert(MyBSTree,node);
    }
    Post_Order(head);

    return 0;
}
