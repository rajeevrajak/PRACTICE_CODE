#include <iostream>
using namespace std;
 
class BST
{
    int data;
    BST *left, *right;
 
public:
	
    BST();

    BST(int);
    
    BST* Insert(BST*, int);
 
    // Inorder traversal.
    void Inorder(BST*);
};
 
// Default Constructor definition.
BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
 
// Parameterized Constructor definition.
BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}
 
// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
    if (!root)
    {
        // Insert the first node, if root is NULL.
        return new BST(value);
    }
 
    // Insert data.
    if (value > root->data)
    {
    	
        root->right = Insert(root->right, value);
    }
    else
    {

        root->left = Insert(root->left, value);
    }
 
    // Return 'root' node, after insertion.
    return root;
}
 

void BST ::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
 
// Driver code
int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 25);
    b.Insert(root, 30);
    b.Insert(root, 46);
    b.Insert(root, 34);
    b.Insert(root, 70);
    b.Insert(root, 65);
    b.Insert(root, 80);
 
    b.Inorder(root);
    return 0;
}
