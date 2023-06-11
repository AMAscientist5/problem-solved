#include<bits/stdc++.h>

using namespace std;

int main()
{

    /*
pair<int, string>p;
p.first = 10;
p.second = "arif";
cout<<p.second<<p.first;
    */

    /*
  pair<string,int>p[10];
  for(int i=1; i<=3; i++)
  {
      string s;
      int age;
      cin>>s;
      cin>>age;
      p[i].first = s;
      p[i].second = age;
  }
  for(int i=1; i<=3; i++)
  {
      cout<<"student "<<i<<" is "<<p[i].first<<" "<<p[i].second<<endl;
  }

    */

    int ara[10] = {7,2,1,9, 3, 10, 2, 41, 22, 51};

    sort(ara, ara+10);

    for(int i =0; i<10; i++)
    {
        cout<<ara[i]<<" ";;
    }

    cout<<endl;
    pair<int, int>p[5];

    p[0].first = 1;
    p[0].second = 5;
    p[1].first =2;
    p[1].second = 3;
    p[2].first =1;
    p[2].second = 2;
    p[3].first =5;
    p[3].second = 1;
    p[4].first =4;
    p[4].second = 10;


    for(int i =0; i<5;i++)
    {
      cout<<p[i].first<<" "<<p[i].second<<endl;
    }

    sort(p, p+5);

    cout<<endl;
    cout<<endl;

     for(int i =0; i<5;i++)
    {
      cout<<p[i].first<<" "<<p[i].second<<endl;
    }



    return 0;
}

