#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        // tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleted = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleted;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack a;
    a.push(10);
    a.push(20);
    a.pop();
    a.push(30);

    cout << a.size() << endl;

    int v;
    cin >> v;

    for (int i = 0; i < v; i++)
    {
        int val;
        cin >> val;
        a.push(val);
    }

    while (!a.empty())
    {
        cout << a.top() << endl;
        a.pop();
    }

    return 0;
}