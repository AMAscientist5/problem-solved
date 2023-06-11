#include<stdio.h>


    
int my_len(char p[])
{
   int cnt =0;
   
    for(int i=0; p[i]!='\0';i++)
    {
        cnt++;
    }
  
    return cnt;
}

int main()
{
     char a[100];
     scanf("%s", a);

    int r = my_len(a);
     
    printf("%d", r); 

    return 0;
}
 