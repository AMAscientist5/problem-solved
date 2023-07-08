#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;

    int v;
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    cout << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}