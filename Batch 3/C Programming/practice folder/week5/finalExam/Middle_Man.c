#include<stdio.h>
    
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

   for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {

            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    

 
        if(n%2!=0){
          int mid = (n+1)/2;
          printf("%d", a[mid-1]);
        }else{
          printf("%d ", a[(n/2)-1]);
          printf("%d", a[(n/2)]);
        }


    return 0;
}