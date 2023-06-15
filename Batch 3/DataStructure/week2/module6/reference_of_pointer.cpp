#include<bits/stdc++.h>

using namespace std;

void fun(int * &p, int * &q){   

cout<<p<<endl;

p=q;

cout<<p<<endl;
}

int main()
{
    int val=10;
    int val2=20;
    int* ptr2 = &val2;
    int *ptr=&val;


    cout<<&val<<endl;
    cout<<ptr<<endl;
    cout<<&val2<<endl;
    cout<<ptr2<<endl;


    fun(ptr, ptr2);

    cout<<&val<<endl;
    cout<<ptr<<endl;
    cout<<&val2<<endl;
    // cout<<&ptr<<endl;
  

    return 0;
}