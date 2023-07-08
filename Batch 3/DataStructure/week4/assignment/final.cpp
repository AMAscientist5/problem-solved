#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> s1;
        stack<char> s2;
        int n;
        cin >> n;
        while (n--)
        {
            char c;
            cin >> c;
            if (s1.empty())
            {

                s1.push(c);
            }
            else
            {
                if (c == s1.top())
                {
                    s1.pop();
                }
                else
                {
                    if (c == 'R' || c == 'r')
                    {
                        if (s1.top() == 'B')
                        {
                            s1.pop();
                            s1.push('P');
                        }
                        else if (s1.top() == 'G')
                        {
                            s1.pop();
                            s1.push('Y');
                        }
                        else
                        {
                            s1.push(c);
                        }
                    }
                    else if (c == 'G' || c == 'g')
                    {
                        if (s1.top() == 'R')
                        {
                            s1.pop();
                            s1.push('Y');
                        }
                        else if (s1.top() == 'B')
                        {
                            s1.pop();
                            s1.push('C');
                        }
                        else
                        {
                            s1.push(c);
                        }
                    }
                    else
                    {
                        if (s1.top() == 'R')
                        {
                            s1.pop();
                            s1.push('P');
                        }
                        else if (s1.top() == 'G')
                        {
                            s1.pop();
                            s1.push('C');
                        }
                        else
                        {
                            s1.push(c);
                        }
                    }
                }
            }
        }

        while (!s1.empty())
        {
            if (s2.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            else
            {
                if (s2.top() == s1.top())
                {
                    s2.pop();
                    s1.pop();
                }
                else
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
        };

        while (!s2.empty())
        {
            char c = s2.top();
            s2.pop();
            cout << c;
        }
        cout << endl;
    }

    return 0;
}