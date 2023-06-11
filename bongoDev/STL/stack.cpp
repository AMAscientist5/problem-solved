#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);

        //stackName.empty() if value is empty then return 0 otherwise will return 1;

    while(!st.empty())
    {
        cout<<st.top()<<endl;

        st.pop();
    //}


    return 0;
}
