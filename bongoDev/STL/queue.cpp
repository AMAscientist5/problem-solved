#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue<int>q;

    q.push(100);
    q.push(50);
    q.push(25);


    while(!q.empty())
    {
        cout<<q.front()<<endl;

        q.pop();
    }


    return 0;
}

