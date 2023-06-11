// #include<stdio.h>

// int main(){
//     int t;
//     scanf("%d", &t);
//     while(t--){
//         long long int n;
//         scanf("%lld", &n); 
//         while(n > 0){
//             printf("%lld ", n%10); 
//             n /= 10;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     while(n--)
//     {
//         int a;
//         scanf("%d", &a);
//         while(a>0)
//         {
//             printf("%d ", a%10);
//             a/=10;
//         }
//          printf("\n");
//     }
// }

#include<stdio.h>

int main()
{
    int test;
    scanf("%d", &test);

    for(int i=0; i<test; i++)
    {
        int n;
        scanf("%d", &n);

        do
        {
          printf("%d ", n%10);
          n/=10;
        }
        while(n!=0);
        printf("\n");
    }
}
  
