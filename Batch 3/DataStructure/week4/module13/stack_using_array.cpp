#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack a;
    // a.push(10);
    // a.push(20);
    // a.pop();
    // a.push(30);

    // cout << a.size() << endl;

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
        cout << a.top() << " ";
        a.pop();
    }

    return 0;
}