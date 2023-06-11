#include<stdio.h>
    
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    //int a[row][col];
    int a[4][3];

    for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
       {
          scanf("%d", &a[i][j]);
       }
    }
    
    // for(int i=0; i<row; i++)
    // {
    //    for(int j=0; j<col; j++)
    //    {
    //       printf("%d ", a[i][j]);
    //    }
    //    printf("\n");
    // }

   int e;
   scanf("%d", &e);

//    //  exact row print
//    for(int i=0; i<col; i++)
//    {
//      printf("%d ", a[e][i]);
//    }
    
    
   //  exact column print
   for(int i=0; i<row; i++)
   {
     printf("%d\n", a[i][e]);
   }
    
    return 0;
}