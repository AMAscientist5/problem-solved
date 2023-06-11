#include<stdio.h>
    
//  void fun(int arr[], int n)
//  {
//      for(int i=0; i<n; i++)
//      {
//         printf("%d ", arr[i]);
//      }
//  }   

//  void fun(int *a, int n)
//  {
//      for(int i=0; i<n; i++)
//      {
//         printf("%d ", a[i]);
//      }
//  } 

 void fun(double *a, int n)
 {
     for(int i=0; i<n; i++)
     {
        printf("%0.2lf ", a[i]);
     }
 } 
int main()
{
    double arr[5] = {10.10, 20.20, 30.30, 40.40, 50.50};
    fun(arr, 5);
    return 0;
}