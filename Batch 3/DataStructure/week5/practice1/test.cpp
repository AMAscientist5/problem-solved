#include <bits/stdc++.h>

using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int> *level_order_input()
{
    int val;
    cin >> val;
    BinaryTreeNode<int> *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<BinaryTreeNode<int> *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        BinaryTreeNode<int> *myLeft;
        BinaryTreeNode<int> *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
};

vector<int> v;

void level_order(BinaryTreeNode<int> *root)
{

    if (root == NULL)
        return;

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        v.push_back(root->val);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    level_order(root);
    return v;
}

int main()
{
    BinaryTreeNode<int> root = level_order_input();
    getLevelOrder(root);

    return 0;
}