#include<stdio.h>
    
int main()
{
    char a;
    scanf("%c", &a);
   
 if(a==122)
 {
        printf("%c", a=97);
 }
 else if(a==90){
    printf("%c", a=65);
 }
 else{
 int nch = a+1;
 printf("%c", nch);
 }
    

    return 0;
}