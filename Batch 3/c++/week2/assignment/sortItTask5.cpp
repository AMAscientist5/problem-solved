#include<bits/stdc++.h>

using namespace std;

struct Student {
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool reverseCompare(const Student a, const Student b) {
    int sumMarksA = a.math_marks + a.eng_marks;
    int sumMarksB = b.math_marks + b.eng_marks;

    if (sumMarksA == sumMarksB) {
        return a.id < b.id;
    }
    return sumMarksA > sumMarksB;
}

int main() {
    int n;
    std::cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id
                 >> students[i].math_marks >> students[i].eng_marks;
    }

  sort(students, students + n, reverseCompare);

    for (int i = 0; i < n; i++) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " "
                  << students[i].math_marks << " " << students[i].eng_marks <<endl;
    }

    return 0;
}



// #include<bits/stdc++.h>

// using namespace std;

// class Student{
//     public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;
// };

// int main()
// {
//   int n;
//   cin>>n;
//   Student ar[n];

//   for(int i=0; i<n; i++)
//   {
//     cin>>ar[i].nm>>ar[i].cls>>ar[i].s>>ar[i].id>>ar[i].math_marks>>ar[i].eng_marks;
//   }
  
//   // Student mx; 
// //   mx.math_marks + mx.eng_marks = INT_MIN;

//  for(int i=0; i<n; i++){
//     cout<<ar[i].math_marks+ar[i].eng_marks<<endl;
//   }



//   for(int i=0; i<n-1; i++){
//         if(ar[i].math_marks+ar[i].eng_marks>mx.math_marks+mx.eng_marks){
//             mx=ar[i];
//         }
//   }
//  // cout<<ar[i].math_marks+ar[i].eng_marks<<endl;
//   //  cout<<mx.nm<<" ";
//   //  cout<<mx.cls<<" ";
//   //  cout<<mx.s<<" ";
//   //  cout<<mx.id<<" ";
//   //  cout<<mx.math_marks<<" ";
//   //  cout<<mx.eng_marks<<endl;


//     return 0;
// }