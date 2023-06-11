#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
    string name;
    int age;
    

    Person(string name, int age)
    {
        this->name=name;
        this->age=age;
        
    };
    void fullName()
    {
      cout<<"Hello "<<endl;
    };
  
};

int main()
{
  Person student("Ahmad", 28);

  student.fullName();
  cout<<student.name<<endl;
  cout<<student.age<<endl;

    return 0;
}