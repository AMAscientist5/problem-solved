#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  string x;
  cin>>x;
  int cnt=0;

  stringstream ss(s);
  string word;

 while(ss>>word)
 {
    cout<<word<<"="<<x<<endl;
    if(word==x)cnt++;
 }
  cout<<cnt<<endl;
  

    return 0;
}

 


 

