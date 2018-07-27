
/* a tree type structure, that has 3 parts : (i) Data Field(D),
                                             (ii) Left SubTree(left link == L),
                                             (iii) Right SubTree(right link == R)
PREorder( D --> L --> R)
INorder( L--> D --> R)
POSTorder( L --> R --> D)
*/
#include<iostream>
#include<string>
using namespace std;

struct node
{
    char data;
    node *left;
    node *right;
};

long long pre;

node* construct_tree(string preorder, string inorder,int inStart, int inFinal)
{
    if(inStart>inFinal)
    {
    return NULL;
    }
    long long i,inIndex;

    node *temp=new node;
    /* this is the root, always.
    because the first Entry of PreOrder Traversal is always the root of that tree
    and this root is the last Entry for PostOrder Traversal */

    temp->data=preorder[pre++];

    for(i=inStart;i<=inFinal;i++)
    {
        if(inorder[i]==temp->data)
         /* searching the position of the root in the INORDER tree.
        this will be used as the border in left & right child partition */
        {
        inIndex=i;
        }
    }
    temp->left=construct_tree(preorder,inorder,inStart,inIndex-1);
    temp->right=construct_tree(preorder,inorder,inIndex+1,inFinal);
    return temp;
}

void postorder_traversal(node *MyNewlyBuiltTree) //POSTorder( L --> R --> D)
{
    if(MyNewlyBuiltTree==NULL)
        return;

    postorder_traversal(MyNewlyBuiltTree->left);

    postorder_traversal(MyNewlyBuiltTree->right);

    cout<<MyNewlyBuiltTree->data;
}

int main()
{
    string preorder,inorder,postorder;
    //pt 1 input the Preorder & Inorder Traversal
    while(cin>>preorder>>inorder)
    {
        long long len_in=inorder.length();
        pre=0;
        node *MyTree;
        //pt2 constructing the tree
        MyTree=construct_tree(preorder,inorder,0,len_in-1);

        //pt 3 getting the preorder
        postorder_traversal(MyTree);
        cout<<endl;
    }

return 0;
}
