#include<bits/stdc++.h>

using namespace std;

int main()
{

vector<int>v={1, 2, 2,4, 3,5, 1, 2,4, 5, 3, 2};
// vector<int>:: iterator it;
// it = find(v.begin(),v.end(),3);

auto it = find(v.begin(),v.end(),500);
if(it==v.end()) cout<<"Not found"<<endl;
else cout<<"found"<<endl;
// cout<<*it;

    return 0;
}