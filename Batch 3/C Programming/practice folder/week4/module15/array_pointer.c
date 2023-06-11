//  #include <stdio.h>
//     void m(int *p)
//     {
//         int i = 0;
//         for(i = 0;i < 5; i++)
//         printf("%d\t", p[i]);
//     }
//     void main()
//     {
//         int a[5] = {6, 5, 3};
//         m(&a);
//     }
#include<stdio.h>
    
int main()
{
    int ar[5] =  {10, 20, 30, 40, 50};

    // printf("0th index er value %p\n", &ar[0]);
    // printf("0th index er value %p\n", ar);

    // printf("0th index er value %d\n", ar[0]);
    // printf("0th index er value %d\n", *ar);

    
    // printf("0th index er value %d\n", ar[1]);
    // printf("0th index er value %d\n", *(ar+1));

    // printf("%d", *(ar+2));
    // printf("%d", *(2+ar));

    // ar[1] = *(ar+1)
    // *(ar+1) = ar[1];
    // *(1+ar) = ar[1]/1[ar]

      printf("%d\n", ar[1]);
      printf("%d\n", 1[ar]);
       printf("%d\n", *(ar+1));
      printf("%d\n", *(1+ar));

    return 0;
}