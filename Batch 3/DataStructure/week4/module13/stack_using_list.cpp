#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;

    int s;
    cin >> s;

    for (int i = 0; i < s; i++)
    {
        int v;
        cin >> v;
        l.push_back(v);
    }

    cout << l.size() << endl;

    while (!l.empty())
    {
        cout << l.back() << endl;
        l.pop_back();
    }

    return 0;
}