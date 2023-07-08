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
        head->prev = NULL;
        delete deleted;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        Node *tmp = head;
        int sum = 0;
        while (tmp != NULL)
        {
            tmp = tmp->next;
            sum++;
        }
        return sum;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    };
};

int main()
{
    myStack a;

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
        cout << a.top() << endl;
        a.pop();
    }

    return 0;
}