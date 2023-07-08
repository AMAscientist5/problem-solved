#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class MyQueue
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
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleted = head;
        if (head->next == NULL)
        {
            head = NULL;
            delete deleted;
            return;
        }
        head = head->next;
        delete deleted;
    }
    int front()
    {
        return head->val;
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
    MyQueue a;

    int v;
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        int val;
        cin >> val;
        a.push(val);
    }
    cout << a.size() << endl;

    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
    // if (!a.empty())
    // {

    //     a.pop();
    // }

    return 0;
}