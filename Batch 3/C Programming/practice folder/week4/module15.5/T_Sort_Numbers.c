#include<stdio.h>
    
int main()
{
    int a[100006];
    int b[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d", &a[i]);
         b[i] = a[i];
    }

    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(a[i]>a[j])
            {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }

    for(int i=0; i<3; i++)
    {
      printf("%d\n", a[i]);
    }

    printf("\n");
    for(int i=0; i<3; i++)
    {
      printf("%d\n", b[i]);
    }
    

    return 0;
}




// #include<stdio.h>

// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//    int max;
//    int min;
//    int mid;

//     if(a<=b && a<=c)
//     {
//         min = a;
//     }
//     if(b<=a && b<=c)
//     {
//         min = b;
//     }
//     if(c<=a && c<=b)
//     {
//         min = c;
//     }


//     if(a>=b && a>=c)
//     {
//         max =a;
//     }
//     if(b>=a && b>=c)
//     {
//         max=b;
//     }
//     if(c>=a && c>=b)
//     {
//         max = c;
//     }

//    if(a>min && a<=max)
//     {
//         mid =a;
//     }
//     if(b>=min && b<=max)
//     {
//         mid=b;
//     }
//     if(c>min && c<max)
//     {
//         mid = c;
//     }

//     printf("%d\n", min);
//     printf("%d\n", mid);
//     printf("%d\n", max);
//     printf("\n");
//     printf("%d\n", a);
//     printf("%d\n", b);
//     printf("%d\n", c);
    

//     return 0;
// }