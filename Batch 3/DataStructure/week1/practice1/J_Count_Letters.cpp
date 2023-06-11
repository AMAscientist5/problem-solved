#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;
  vector<int>v(26);
  for(int i=0; i<v.size();i++)
   {
    v[i] = 0;
   }

  for(int i=0; i<s.size();i++)
   {  
     v[s[i]-97]++;
   }
  
 for(int i=0; i<26;i++)
  {  
    if(v[i]>0)
    {
      char c = i+'a';
      cout<<c<<" : "<<v[i]<<endl;
    }  
  }
    return 0;
}

// #include<stdio.h>
// #include<string.h>
    
// int main()
// {
//     char a;
//     int cnt[26] = {0};

//     while(scanf("%c", &a) !=EOF )
//     {
//         int value = a-'a';
//         cnt[value]++;  
//     }
      
//       for(int i=0; i<26; i++)
//       {
//           if(cnt[i]>0)
//           {
//              printf("%c : %d\n",i+'a', cnt[i]);
//           }
//       }

//     return 0;
// }

//======================


// #include <stdio.h>

// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int a[n];
    
//    for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);        
//     }

//     int count[m];
    
//     for (int i = 0; i < m; i++) {
//         count[i] = 0;
//     }


//       for (int i = 0; i < n; i++) {
//         count[a[i]-1]++;
        
//     }
    
//     for (int i = 0; i < m; i++) {
//         printf("%d\n", count[i]);
//     }
    
//     return 0;
// }
