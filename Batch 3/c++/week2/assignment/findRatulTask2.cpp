#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);

  stringstream ss(s);
  string word;

  bool answer = false;  

 while(ss>>word)
 {
    if(word=="Ratul"){
        answer = true;
        break;
    }
 }
   if(answer){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

 


 

