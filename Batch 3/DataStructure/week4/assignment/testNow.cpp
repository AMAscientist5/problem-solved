#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        stack<char> c;

        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if (c.empty())
            {

                c.push(a);
            }
            else
            {
                if (a == c.top())
                {
                    c.pop();
                }
                else
                {
                    if (a == 'R' || a == 'r')
                    {
                        if (c.top() == 'B')
                        {
                            c.pop();
                            c.push('P');
                        }
                        else if (c.top() == 'G')
                        {
                            c.pop();
                            c.push('Y');
                        }
                        else
                        {
                            c.push(a);
                        }
                    }
                    else if (a == 'G' || a == 'g')
                    {
                        if (c.top() == 'R')
                        {
                            c.pop();
                            c.push('Y');
                        }
                        else if (c.top() == 'B')
                        {
                            c.pop();
                            c.push('C');
                        }
                        else
                        {
                            c.push(a);
                        }
                    }
                    else
                    {
                        if (c.top() == 'R')
                        {
                            c.pop();
                            c.push('P');
                        }
                        else if (c.top() == 'G')
                        {
                            c.pop();
                            c.push('C');
                        }
                        else
                        {
                            c.push(a);
                        }
                    }
                }
            }

            // if (!c.empty())
            // {
            //     c.push(a);
            // }
            // else
            // {
            // if (a == c.top())
            // {
            //     c.pop();
            // }
            //     else
            //     {
            //         if (a == 'R')
            //         {
            //             if (c.top() == 'G')
            //             {
            //                 c.pop();
            //                 c.push('Y');
            //             }
            //             else if (c.top() == 'B')
            //             {
            //                 c.pop();
            //                 c.push('P');
            //             }
            //             else
            //             {
            //                 c.push(a);
            //             }
            //         }
            //         else if (a == 'G')
            //         {
            //             if (c.top() == 'R')
            //             {
            //                 c.pop();
            //                 c.push('Y');
            //             }
            //             else if (c.top() == 'B')
            //             {
            //                 c.pop();
            //                 c.push('C');
            //             }
            //             else
            //             {
            //                 c.push(a);
            //             }
            //         }
            //         else
            //         {
            //             if (c.top() == 'R')
            //             {
            //                 c.pop();
            //                 c.push('P');
            //             }
            //             else if (c.top() == 'G')
            //             {
            //                 c.pop();
            //                 c.push('C');
            //             }
            //             else
            //             {
            //                 c.push(a);
            //             }
            //         }
            //     }
            // }
            // cout << endl;
        }

        while (!c.empty())
        {
            cout << c.top();
            c.pop();
        }
    }

    return 0;
}