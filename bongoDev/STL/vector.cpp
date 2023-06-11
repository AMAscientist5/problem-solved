#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(100);
    v.push_back(90);
    v.push_back(70);
    v.push_back(30);

   int sz = v.size();

    cout<<"size-"<<sz<<endl;

    for(int i =0; i<sz;i++)
    {
        cout<<v[i]<<endl;
    }


    //======= sorting======
   // sort(v.begin(), v.end());

   //  for(int i =0; i<sz;i++)
   // {
     //   cout<<v[i]<<" ";
   // }
    //======================

     vector<int>newvector[4];

    for(int i = 0; i<4;i++)
    {
        while(1)
        {
            cout<<"vector-"<<i<<"-";
            int n;
            cin>>n;
            if(n==0)
                break;
            newvector[i].push_back(n);
        }

    }

    for(int i=0; i<4;i++)
    {
        for(int j=0; j < newvector[i].size(); j++)
        {
            cout<<newvector[i][j]<<"";

        }
        cout<<endl;
    }





    return 0;
}
