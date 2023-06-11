// #include<bits/stdc++.h>

// using namespace std;

// int power(int x, int i)
// { 
//     return pow(5*1.0,i*1.0);
// }

// int main()
// {
//   int  x, n;
//   cin>>x>>n;
//   int sum=0;

//  for(int i=2; i<n;  i=i+2)
//  {
//     sum += power(x, i);
//  }

//  cout<<sum;
//     return 0;
// }
//==========================
// #include<bits/stdc++.h>
// using namespace std;

//     long long customPow(int x, int n) {
//     long long result = 1;

//     for (int i = 0; i < n; ++i) {
//         result *= x;
//     }
//     return result;
// }

// long long calculateEquation(int x, int n) {
//     long long sum = 0;

//     for (int i = 2; i < n; i += 2) {
//         sum += customPow(x, i);
//     }
//     return sum;
// }

// int main() {
//     int x, n;
//     cin >> x >> n;

//     long long result = calculateEquation(x, n);
//     cout<< result <<endl;

//     return 0;
// }
//=======================
#include<bits/stdc++.h>
using namespace std;

    long long customPow(int x, int n) {
    long long result = 1;

    for (int i = 0; i < n; ++i) {
        result *= x*1.0;
    }
    return result;
}

long long calculateEquation(int x, int n) {
    long long sum = 0;

    for (int i = 2; i < n; i += 2) {
        sum += customPow(x, i);
    }
    return sum;
}

int main() {
    int x, n;
    cin >> x >> n;

    long long result = calculateEquation(x, n);
    cout<< result <<endl;

    return 0;
}


