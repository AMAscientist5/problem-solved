
/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>

// bool preOrder(BinaryTreeNode<int> *root, int x)
// {
//     if (root == NULL)
//     {
//         return false;
//     }

//     if (root->data == x)
//     {
//         return true;
//     }

//     bool leftFound = preOrder(root->left, x);
//     if (leftFound)
//     {
//         return true;
//     }

//     bool rightFound = preOrder(root->right, x);
//     return rightFound;

// }

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);

    return (l || r);
}
