#include<bits/stdc++.h>

using namespace std;

int main()
{
  
int* a = new int[5];  // Dynamic array allocation

for(int i=0; i<5; i++)
{
    cin>>a[i];
}


int* firstElementAddress = &a[0];  // Getting the memory address of the first element

cout<<*a<<endl;
cout<<a<<endl;
cout<<&a;






//   int *a = new int;

//   *a = 10;
//    cout<<a<<endl;

//   float *b = new float;

//   *b = 2.56;
//    cout<<b<<endl;
//    cout<<*b<<endl;


  return 0;
}