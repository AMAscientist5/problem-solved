#include <bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    queue<char> q1;
    queue<char> q2;
    for (char c : s)
    {
        if (c == 'A' || c == 'a')
        {
            q1.push(c);
        }
        else
        {
            q2.push(c);
        }
    }
    if (q1.size() == q2.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isValid(s))
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