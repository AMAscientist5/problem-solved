#include<stdio.h>
int count_before_zero(int a[], int s)
{
    int cnt =0;
    for(int i=0; i<s; i++)
      {
        if(a[i]!=0)
        {
            cnt++;
        }
        else{
            break;
        }
      }
     return cnt;
}

int main()
{
    int s;
    scanf("%d", &s);
    int a[s];
    for(int i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int count = count_before_zero(a, s);
    printf("%d", count);
    return 0;
}