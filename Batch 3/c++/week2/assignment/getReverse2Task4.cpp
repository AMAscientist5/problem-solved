#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
  int n;
  cin>>n;
  Student ar[n];
  Student temp;

  for(int i=0; i<n; i++)
  {
    cin>>ar[i].nm>>ar[i].cls>>ar[i].s>>ar[i].id;
  }
  
  int p=0;
  for(int i=n-1; i>=0; i--)
  {
      if(p<=i)
      {
        temp.id = ar[p].id;
        ar[p].id = ar[i].id;
        ar[i].id = temp.id;
      }
      p++;
  }

  for(int i=0; i<n; i++){
        cout<<ar[i].nm<<" "<<ar[i].cls<<" "<<ar[i].s<<" "<<ar[i].id<<endl;
  }
    return 0;
}