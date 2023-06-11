#include<bits/stdc++.h>

using namespace std;

class Person{
 public: 
   char name[50];
   float height;
   int age;

    Person(char* n, float h, int a){
     strcpy(name,n);
     height = h;
     age= a;
}
};

int main(){

  Person person1("Ahmad Musa", 5.60, 28);
  Person person2("Ahmad Abdullah", 5.60, 30);

  
  if(person1.age > person2.age){
     cout<<person1.name;
  }else{
     cout<<person2.name;
  }

}
