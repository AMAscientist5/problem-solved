void reverseStack(stack<int> &s)
{

    // Write your code here
    if (s.empty())
        return;

    int k = s.top();
    s.pop();
    reverseStack(s);

    stack<int> cp;
    while (!s.empty())
    {
        cp.push(s.top());
        s.pop();
    }
    cp.push(k);
    while (!cp.empty())
    {
        s.push(cp.top());
        cp.pop();
    }
}