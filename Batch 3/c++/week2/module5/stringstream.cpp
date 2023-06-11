#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin,s);

//    stringstream ss(s);
//    string word;
//     ss>>word;
//   cout<<word<<endl;


//   stringstream ss(s);
//    string word;
//   while(ss>>word){
//   cout<<word<<endl;
//   }


// stringstream ss(s);
// string word;
// int cnt;
// while(ss>>word){
//    cnt++;
// }
// cout<<cnt<<endl;


stringstream ss;
ss<<s;

string word;
int cnt;
while(ss>>word){
   cnt++;
}
cout<<cnt<<endl;


    return 0;
}