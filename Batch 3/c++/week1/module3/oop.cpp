#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    char name[100];
     int role;
     int cls;
     char section; 
};

int main()
{
  Student kar;
  kar.role = 1;
  kar.cls = 9;
  kar.section = 'c';
  char nm[100] = "Kar";
  strcpy(kar.name,nm);

//   cout<<kar.name;

  Student rah;
  rah.role = 1;
  rah.cls = 9;
  rah.section = 'c';
  char nm2[100] = "rah";
  strcpy(rah.name,nm2);

  cout<<rah.name;



  
    return 0;
};