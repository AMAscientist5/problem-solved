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

    stack<int> s2;

    while (!st.empty())
    {
        s2.push(st.top());
        st.pop();
    }

    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    return 0;
}