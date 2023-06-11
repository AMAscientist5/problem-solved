#include<stdio.h>
// int i=5;    
// void fun()
// {

//    if(i<1) return;
//    printf("%d\n", i);
//     i--;
//     fun();
// }

// int i=1;    
// void fun()
// {

//    if(i>5) return;
//    printf("%d\n", i);
//     i++;
//     fun();
// }    

  
// void fun(int i)
// {

//    if(i<1) return;
//    printf("%d\n", i);
 
//     fun(i-1);
// }  

void fun(int i)
{

   if(i==6) return;
   printf("%d\n", i);
 
    fun(i+1);
}  


int main()
{
    fun(1);
    return 0;
}