#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {
        int v;
        cin >> v;
        if (v == 0)
        {
            string n;
            cin >> n;
            q.push(n);
        }
        else
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
