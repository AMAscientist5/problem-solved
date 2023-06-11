// #include<stdio.h>
// #include<string.h>
    
// int main()
// {
//   char a[1000001];
//   fgets(a,1000001,stdin);
//  int sz = strlen(a);

// for(int j=0; j<sz; j++)
// {    
//     if(a[j] != '\\')
//     {
//      printf("%c", a[j]);

//     }
//     else{
//         a[j] = '\0';
//         break;
//     }
// }
//     return 0;
 // }

// option 2

#include<stdio.h>
#include<string.h>
    
int main()
{
  char a[1000001];
  fgets(a,1000001,stdin);
 int sz = strlen(a);

for(int j=0; a[j] != '\\'; j++)
{    
     printf("%c", a[j]);
}
    return 0;
}

