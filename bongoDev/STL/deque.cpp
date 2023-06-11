#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque<int>dq;

    dq.push_back(100);
    dq.push_back(50);
    dq.push_front(1);
    dq.push_front(5);

    dq.push_back(500);

   int sz  = dq.size();

   dq.pop_back();

    while(!dq.empty())
    {
        cout<<dq.front()<<" "<< dq.back()<<endl;
        dq.pop_front();
    }


    return 0;
}

