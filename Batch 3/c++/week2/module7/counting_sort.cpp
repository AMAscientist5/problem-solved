#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n; cin>>n;    // input will be 
                    // first line: 9, second dline: character add 
  int frq[26] = {0};
  for(int i=0; i<n; i++){
     char a;
     cin>>a;
     frq[a-'a']++;
  }
  for(char i='a'; i<'z'; i++){
      if(frq[i-'a']>0){
        for(int j=0; j<frq[i-'a']; j++)
        {
            cout<<i;
        }
      }
  }

    return 0;
}