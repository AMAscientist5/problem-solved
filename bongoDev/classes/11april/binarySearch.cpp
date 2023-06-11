#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ara[10] = {1, 6, 7, 10, 18, 28, 56, 65, 100, 299};

   int target =98;
   int flag = 0;

   int lo = 0;
   int hi = 9;

    while(lo<=hi)
    {
       int mid = (lo+hi)/2;

        cout<<"lo"<<lo<<endl;
        cout<<"hi"<<hi<<endl;
        cout<<"mid"<<mid<<endl;
        cout<<"ara[mid]"<<ara[mid]<<endl;

        cout<<endl<<endl;

      if(ara[mid]==target)
       {
        cout<<"Found the value at "<<mid<<" index"<<endl;
        flag = 1;
        break;
       }
      else if(ara[mid]>target)
       {
        hi = mid-1;
       }
      else if(ara[mid]<target)
       {
       lo = mid+1;
       }

    }


    if(!flag)
    {
     cout<<"not fount"<<endl;
    }

    return 0;
}
