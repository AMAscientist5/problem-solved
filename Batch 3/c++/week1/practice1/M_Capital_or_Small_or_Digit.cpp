#include<bits/stdc++.h>

using namespace std;

int main()
{
  char x;
  cin>>x;

  if(x>=48 && x<=57){
    cout<<"IS DIGIT";
  }else{
     cout<<"ALPHA"<<endl;
    if(x>='A' && x<='Z'){
     cout<<"IS CAPITAL";
    }else{
     cout<<"IS SMALL";
    }
  }
    return 0;
}