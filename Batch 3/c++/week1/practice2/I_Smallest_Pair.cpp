#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {  
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
         cin>>a[i];
     }

    int mn = INT_MAX;

    for(int i=0; i<n-1; i++){
         for(int j=i+1; j<n; j++){
           int v = a[i]+a[j]+j-i;
           mn = min(mn,v);  
         }
     }
    //  cout<<mn; wrong approach
     cout << mn << "\n";
         cout << mn <<endl;

  }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int* a = new int[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int mn = INT_MAX;

//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 int v = a[i] + a[j] + j - i;
//                 mn = min(mn, v);
//             }
//         }
//         cout << mn << "\n";

//         delete[] a;
//     }
//     return 0;
// }
