#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> ls;
    int s;
    cin >> s;

    for (int i = 0; i < s; i++)
    {
        int v;
        cin >> v;
        ls.push_back(v);
    }

    cout << ls.size() << endl;

    while (!ls.empty())
    {
        cout << ls.front() << endl;
        ls.pop_front();
    }

    return 0;
}