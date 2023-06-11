// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//   int n;
//   cin>>n;
//   char s[n];

// for(int i=0; i<n; i++)
// {
//     cin>>s[i];
// }
// int frq[n];

// for(int i=0; i<n; i++)
// {
//      frq[i] = s[i];
// }

// for(int i=0; i<n-1; i++)
// {   
//     for(int j=i+1; j<n; j++){

//          if(frq[i]>frq[j]){
//             int temp = frq[i];
//             frq[i] = frq[j];
//             frq[j] = temp;
//          }
//     }
// }

// for(int i=0; i<n; i++)
// {   
//     s[i] = frq[i];
//     cout<<s[i];
// }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int count[26] = {0};

for (int i = 0; i < N; i++) {
    int index = S[i] - 'a';
    count[index]++;
}

    int idx = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            S[idx] = 'a' + i;
            idx++;
        }
    }

    cout << S << endl;

    return 0;
}
