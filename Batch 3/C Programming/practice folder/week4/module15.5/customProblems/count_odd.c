#include<stdio.h>
    
int count_odd(int a[], int s)
{
    int cnt =0;
    for(int i=0; i<s; i++)
    { 
        if(a[i]%2!=0)
        {
            cnt++;
        }
    }
        return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

  int count = count_odd(a, n);
  printf("%d", count);
    return 0;
}