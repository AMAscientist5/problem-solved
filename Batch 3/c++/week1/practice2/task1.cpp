#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(char* n, int r, char s, int m, int c){
       strcpy(name,n);
	    roll = r;
	    section = s;
	    math_marks = m;
	    cls = c;
    };
};

int main()
{
    char name[20] = "Ahmad";
     Student s1("Ahmad", 21,'A', 50, 7);
     Student s2("Ahmad", 21,'A', 60, 7);
     Student s3("Ahmad", 21,'A', 75, 7);

    if(s1.math_marks>s2.math_marks && s1.math_marks> s3.math_marks){
         cout<<s1.math_marks<<endl; 
    }
    else if(s2.math_marks>s1.math_marks && s2.math_marks>s3.math_marks){
        cout<<s2.math_marks<<endl; 
    }else{
         cout<<s3.math_marks<<endl; 
    }

    
    
  

    return 0;
}