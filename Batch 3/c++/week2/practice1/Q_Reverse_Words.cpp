#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);

 stringstream st(s);
 string word;
 string reversString;

 while(st>>word){
  reverse(word.begin(), word.end());
    reversString +=word + " ";
 }
 
 reversString.pop_back();
 cout<<reversString;
    return 0;
}
