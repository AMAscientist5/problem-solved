#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;

    int v;
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    cout << s.size() << endl;

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}