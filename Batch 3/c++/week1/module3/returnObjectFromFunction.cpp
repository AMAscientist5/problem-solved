#include<bits/stdc++.h>

 using namespace std;

class Student{
 public:
    char name[100];
     int roll;
     int cls;
     char section; 
     Student(int r,char s,int c,char *n){
        roll = r;
        section = s;
        cls = c;
        strcpy(name,n); 
     }
  };

  Student fun(){
    
    char kar[100] = "david";
    Student ahmed(29, 'b', 7, kar); //send string this way
    return ahmed;
  }

int main()
{
    Student sha = fun();

    cout<<sha.name<<endl;
    cout<<sha.roll<<endl;
    cout<<sha.cls<<endl;
    cout<<sha.section<<endl;

    
    return 0;
}



