#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    };

    bool flag = true;
    if (s.size() != q.size())
    {
        flag = false;
    }
    else
    {
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                flag = false;
            }
            s.pop();
            q.pop();
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}