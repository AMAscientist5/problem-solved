#include<bits/stdc++.h>

using namespace std;

void fun(int * p){   
//  cout<<&p<<endl;
 cout<<p<<endl;
 cout<<&p<<endl;

}

int main()
{
    int val=10;
    int *ptr=&val;
    fun(ptr);
    // cout<<&val<<endl;
    // cout<<&ptr<<endl;
    cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    cout<<&ptr<<endl;
  

    return 0;
}