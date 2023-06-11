#include<bits/stdc++.h>

using namespace std;

int main()
{
  int test;
  cin>>test;
 

  while(test--)
  {
     int n;
     cin>>n;
     int element[n];
     int event=0;
     int odd=0;
     
    for(int i=0; i<n; i++)
    {
        cin>>element[i];
        
        if(element[i]==1)
        {
            odd++;
        }
        else if(element[i]%2==1){
            odd++;
        }else{
            event++;
        }
    }

    if((event+odd)%2!=0){
        cout<<"-1"<<endl;
    }
    else if(event>odd){
        cout<<(event-odd)/2<<endl;
    }else{
        cout<<(odd-event)/2<<endl;
    }
  }

    return 0;
}
//==============================
// #include<bits/stdc++.h>
// using namespace std;
    
// int main()
// {
//     int test;
//     cin>>test;
//     int odd=0, even=0;
 
//     while(test--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
 
//         for(int i=0; i<n; i++)
//         {
//             cin>>a[i];
//         }
 
//         int odd=0, even=0;
//          for(int i=0; i<n; i++)
//         {
//             if(a[i]%2==0)
//             {
//                 even++;
//             }else{
//                 odd++;
//             }
//         }
//         if((odd+even)%2!=0){
//             cout<<" -1"<<endl;
//         }
//         else if(odd==even){
//             cout<<" 0"<<endl;
//         }
//         else{
//             if(even>odd)
//             {
//                 cout<<(even-odd)/2<<endl;
//             }else{
//                 cout<<(odd-even)/2<<endl;
//             }
//         }
//     }
//     return 0;
// }