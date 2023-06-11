#include<bits/stdc++.h>

using namespace std;

class Cricketer
{   
    public:
	int jersey_no= 5;
	char country[100]="Arzentina";
};
class Cricketer2
{   
    public:
	int jersey_no= 7;
	char country[100]="America";
};

int main()
{
  Cricketer* dhoni  = new Cricketer;
  Cricketer2* kohli  = new Cricketer2;

  

// (*kohli).jersey_no = (*dhoni).jersey_no;
// kohli->jersey_no = dhoni->jersey_no;
    //  kohli=dhoni; // wrong approach

     delete dhoni;

    cout<<kohli->jersey_no<<endl;
    cout<<kohli->country<<endl;

   
    return 0;
}