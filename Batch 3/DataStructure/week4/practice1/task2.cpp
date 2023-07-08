#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool flag = true;
    if (st.size() != q.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!st.empty())
        {
            int s1 = st.top();
            int s2 = q.front();
            if (s1 != s2)
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}