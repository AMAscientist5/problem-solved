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

int main()
{
    char kar[100] = "david";
    // Student sha(29, 'b', 7, kar); normal object create

   // without constructor we can define dynamic object this..
    //    Student* sha = new Student;


    Student* sha = new Student(29, 'b', 7, kar);

    // cout<<sha.name<<endl;
    // cout<<sha.roll<<endl;
    // cout<<sha.cls<<endl;
    // cout<<sha.section<<endl;
   
//    dynamic object access1
    cout<<sha->name<<endl;
    cout<<sha->roll<<endl;
    cout<<sha->cls<<endl;
    cout<<sha->section<<endl;
    
   (*sha).roll = 30;
   sha->roll = 35;

    // dynamic object delete
     delete sha;

//    dynamic object access2
    cout<<(*sha).name<<endl;
    cout<<(*sha).roll<<endl;
    cout<<(*sha).cls<<endl;
    cout<<(*sha).section<<endl;
    return 0;
}



