#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    vector<int> v;
    int sz = 0;

    void push(int x)
    {
        sz++;
        v.push_back(x);
    }
    void pop()
    {
        sz--;
        v.pop_back();
    }
    int top()
    {
        return v.back();
    };

    int size()
    {
        return v.size();
    };

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st, stTwo;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        stTwo.push(val);
    }
    bool flag = true;

    if (st.size() != stTwo.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!st.empty())
        {
            int s1 = st.top();
            int s2 = stTwo.top();
            if (s1 != s2)
            {
                flag = false;
                break;
            }
            st.pop();
            stTwo.pop();
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