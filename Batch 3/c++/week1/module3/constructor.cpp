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
    //  Student sha(3,'A',7,'Sha'); wrong approach

    Student sha(29, 'b', 7, "Sfa");

    cout<<sha.name<<endl;
    cout<<sha.roll<<endl;
    cout<<sha.cls<<endl;
    cout<<sha.section<<endl;

    
    return 0;
}


// class Student {
// public:
//     char name[100];
//     int roll;
//     int cls;
//     char section;

//     Student(int r, char s, int c, const char* n) {
//         roll = r;
//         section = s;
//         cls = c;
//         strcpy(name, n);
//     }
// };

