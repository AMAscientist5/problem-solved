#include<bits/stdc++.h>

using namespace std;

namespace Rakib
{
   int age=24;
   void hello()
   {
    cout<<"Rakib Namespace"<<endl;
   }
}

namespace Sakib
{
   int age2=30;
   void hello2()
   {
    cout<<"Sakib Namespace"<<endl;
   }
}
using namespace Rakib;
int main()
{
//   cout<<Rakib::age<<endl;
//   cout<<age<<endl;
    // hello();
//   Sakib::hello2();

    return 0;
}