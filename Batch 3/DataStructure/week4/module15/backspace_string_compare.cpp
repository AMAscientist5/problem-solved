class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> st1;
        for (char c : s)
        {
            if (c != '#')
            {
                st1.push(c);
            }
            else
            {
                if (!st1.empty())
                {
                    st1.pop();
                }
            }
        }

        stack<char> st2;
        for (char c : t)
        {
            if (c != '#')
            {
                st2.push(c);
            }
            else
            {
                if (!st2.empty())
                {
                    st2.pop();
                }
            }
        }

        if (st1.size() != st2.size())
        {
            return false;
        }
        else
        {

            while (!st1.empty())
            {
                if (st1.top() != st2.top())
                {
                    return false;
                }
                st1.pop();
                st2.pop();
            }
        }

        return st1.empty();
    }
};

//...........
// class Solution
// {
// public:
//     bool backspaceCompare(string s, string t)
//     {
//         stack<char> s1, s2;
//         for (char c : s)
//         {
//             if (c == '#')
//             {
//                 if (!s1.empty())
//                     s1.pop();
//             }
//             else
//             {
//                 s1.push(c);
//             }
//         }
//         for (char c : t)
//         {
//             if (c == '#')
//             {
//                 if (!s2.empty())
//                     s2.pop();
//             }
//             else
//             {
//                 s2.push(c);
//             }
//         }
//         return s1 == s2;
//     }
// };