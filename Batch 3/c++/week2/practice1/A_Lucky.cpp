#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     string nums;
     cin>>nums;
     int lCnt=0;
     int rCnt=0;
     int sumLeft=0;
     int sumRight=0;
     for(int i=0; i<nums.size(); i++)
     {  
        int c = nums[i] - '0';
        if(lCnt<3){
         sumLeft+=c;
         lCnt++;
        }else{
         sumRight+=c;
        }
     }

    if(sumLeft==sumRight){
           cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
  }

    return 0;
}