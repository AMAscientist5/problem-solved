#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  
  bool is_inside = false;
  int cnt=0;
  for(char c:s)
  {
      if(isalpha(c))
      {
        if(is_inside==false) cnt++;
        is_inside = true;
      }else{
         is_inside=false;
      }
  }
  cout<<cnt;

    return 0;
}


// #include<bits/stdc++.h>

// using namespace std;
// bool isLetter(char c) {
//     return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
// }

// int main()
// {
//   string s;
//   getline(cin, s);
 
//  stringstream ss(s);
//  string word;
//  int cnt =0;
//  while(ss>>word){
   
//     //    if(word[0]>='A' && word[0]<='Z'){
//     //       cnt++;
//     //    } else if(word[0]>='a' && word[0]<='z'){
//     //       cnt++;
//     //    }
//     if (isLetter(word[0])) {
//        cnt++;
//     }

//  }

//  cout<<cnt;
//     return 0;
// }
// //-----------


// int main()
// {
//   string s;
//   getline(cin, s);
 
//  stringstream ss(s);
//  string word;
//  int cnt =0;
//  while(ss>>word){

//    for(int i=0; i<word.size();i++)
//    {  
//        if(word[i]>='A' && word[i]<='Z'){
//           cnt++;
//           break;
//        } else if(word[i]>='a' && word[i]<='z'){
//           cnt++;
//           break;
//        }else{
//         break;
//        }
//    }
//  }
//  cout<<cnt;
//     return 0;
// }

