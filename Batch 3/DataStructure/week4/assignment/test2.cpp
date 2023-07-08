#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // stack<char> s1;
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
                    if (c == 'r' || 'R')
                    {
                        if (s1.top() == 'b' || s1.top() == 'B')
                        {
                            s1.pop();
                            s1.push('P');
                        }
                        else if (s1.top() == 'g' || s1.top() == 'g')
                        {
                            s1.pop();
                            s1.push('Y');
                        }
                        else
                        {
                            s1.push(c);
                        }
                    }
                    else if (c == 'b' || c == 'B')
                    {
                        if (s1.top() == 'r' || s1.top() == 'R')
                        {
                            s1.pop();
                            s1.push('P');
                        }
                        else if (s1.top() == 'G' || s1.top() == 'g')
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
                        if (s1.top() == 'r' || s1.top() == 'R')
                        {
                            s1.pop();
                            s1.push('Y');
                        }
                        else if (s1.top() == 'b' || s1.top() == 'B')
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

        // while (!s1.empty())
        // {
        //     cout << s1.top();
        //     s1.pop();
        // }

        // cout << endl;
    }

    return 0;
}