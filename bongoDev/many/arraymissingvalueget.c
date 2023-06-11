#include<stdio.h>
    
int main()
{
    
    int arr[] ={1, 5, 2, 9, 10, 5, 4, 6, 8};

    int arr2[11] = {0};

    for(int i=0; i<9; i++)
    {
        arr2[arr[i]] = 1;
    }

    for(int i=0; i<=10; i++)
    {
        if(arr2[i]==0)
        {
            printf("%d", i);
            break;
        }
    }

  // constant memory = O(1)
  
  for(int i=1; i<=10; i++)
{
    int flag=0;
    for(int j=0; j<9; j++)
    {
        if(arr[j]==i)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf(i);
        break;
    }
}

// constant memory and linear timecomplexity;
int sum = 0; 
  for(int i=0; i<9; i++)
{
     sum+=arr[i];
}

int n;

int jogfol = n*(n+1)/2;
int ans = jogfol - sum;

    return 0;
}