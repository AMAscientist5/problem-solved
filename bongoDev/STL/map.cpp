#include<bits/stdc++.h>

using namespace std;

map<int, int>frq;


int main()
{
 /*
   map<int, int>m;

    m[10] = 10;
    m[1] = 20;
    m[2] = 30;

    for(int i=0; i<11; i++)
     {
       if(m.find(i) != m.end())
       {
           cout<<i<<" "<<m[i]<<endl;
       }
       else
       {
         cout<<"index "<<i<<" Not Found"<<endl;
       }
     }
 */

   //  second step
   /*
   map<int, int>m;

  int nums[4] = {2, 7, 11, 15};
  int target = 9;

   int sz = 4;
   int ans1, ans2;

    for(int i=0; i<4; i++)
    {
        for(int j= i+1; j<4; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans1 = i;
                ans2 = j;
            }
        }
    }
    cout<<ans1<<" "<<ans2;
   */

   int nums[4] = {2, 7, 11, 15};
   int diff[4];
   int target = 9;

     for(int i=0; i<4; i++)
      {
         frq[ nums[i] ] = i;
         diff[i] = target - nums[i];
      }

     for(int i=0; i<4; i++)
      {
        if(frq.find(diff[i]) != frq.end())
         {
           cout<<i<<" "<<frq[diff[i]]<<endl;
           break;
         }
      }


    int sz = 4;
    int ans1, ans2;

    for(int i=0; i<4; i++)
    {
        for(int j= i+1; j<4; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans1 = i;
                ans2 = j;
            }
        }
    }
    cout<<ans1<<" "<<ans2;

    return 0;
}

