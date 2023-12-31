class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newSt;
        int first;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                first = k;
                break;
            }
            newSt.push(k);
        }

        while (!newSt.empty())
        {
            int k = newSt.top();
            newSt.pop();
            st.push(k);
        }
        return first;
    }

    int peek()
    {
        stack<int> newSt;
        int first;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                first = k;
            }
            newSt.push(k);
        }

        while (!newSt.empty())
        {
            int k = newSt.top();
            newSt.pop();
            st.push(k);
        }
        return first;
    }

    bool empty()
    {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */