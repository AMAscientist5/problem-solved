#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool customFunction(Student a, Student b){
    int marksA = a.math_marks + a.eng_marks; 
    int marksB = b.math_marks + b.eng_marks; 

    if(marksA==marksB){
        return a.id < b.id;
    }
    return marksA > marksB;
}  

int main()
{
  int n;
  cin>>n;
  Student a[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
  }

 sort(a, a+n, customFunction);

 for(int i=0; i<n; i++)
  {
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
  }
    return 0;
}
