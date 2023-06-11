#include<bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, flag=0;
  char s;
  cin>>a>>s>>b;
  int sig = s;

    if(sig==60){
      if(a<b){
      cout<<"Right";
      }else{
        flag =1;
      }
    }
    else if(sig==61){
      if(a==b){
      cout<<"Right";
      }else{
        flag =1;
      }
    }
    else{
      if(a>b){
       cout<<"Right";
      }else{
        flag=1;
      }
    }

  if(flag)
  {
     cout<<"Wrong";
  }


    return 0;
}
//   cout<<a<<" "<<s<<" "<<b;