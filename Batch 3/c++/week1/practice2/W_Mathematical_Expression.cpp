#include<bits/stdc++.h>

using namespace std;

int main()
{
  int a, b,c, flag=0;
  char s,q;
  cin>>a>>s>>b>>q>>c;
  int sig = s;
  int eq = q;

  if(sig==42){
    if(a*b==c){
        cout<<"Yes";
    }else{
        cout<<a*b;
    }
  }
  else if(sig==43){
      if(a+b==c){
        cout<<"Yes";
    }else{
        cout<<a+b;
    }
  }
  else{
      if(a-b==c){
        cout<<"Yes";
    }else{
        cout<<a-b;
    }
  }

    return 0;
}
