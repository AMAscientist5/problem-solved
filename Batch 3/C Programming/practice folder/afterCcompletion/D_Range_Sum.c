#include<stdio.h>
    
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
      long long int l, r, sum=0;
      scanf("%lld %lld", &l, &r);
     
     // n*(n+1)/2
      sum = (l+r)*(r-(l-1))/2;

        printf("%lld\n", sum);
    }

    return 0;
}

// #include<stdio.h>
    
// int main()
// {
//     int test;
//     scanf("%d", &test);

//     while(test--){
//       long long int l, r;
//       scanf("%lld %lld", &l, &r);
//       float sum = (((r-l)+1.0)/2.0)*(l+r);
//         printf("%.0lf\n", sum);
//     }

//     return 0;
// }

 // for( i=l; i<=r; i++){
      //   sum+=i;
      // }