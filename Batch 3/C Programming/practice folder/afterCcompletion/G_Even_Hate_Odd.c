#include<stdio.h>
    
int main()
{
    int test;
    scanf("%d", &test);
    int odd=0, even=0;

    while(test--)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        int odd=0, even=0;
         for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                even++;
            }else{
                odd++;
            }
        }
        if((odd+even)%2!=0){
            printf("-1\n");
        }
        else if(odd==even){
             printf("0\n");
        }
        else{
            if(even>odd)
            {
                printf("%d\n", (even-odd)/2);
            }else{
                printf("%d\n", (odd-even)/2);
            }
        }
    }
    return 0;
}