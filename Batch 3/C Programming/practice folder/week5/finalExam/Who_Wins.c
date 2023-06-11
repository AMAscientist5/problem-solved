#include<stdio.h>
    
int main()
{
    int n;
    scanf("%d", &n);
    int tiger=0,pathan=0,draw=0;
    while(n--)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if(x1>x2)
        {
            tiger++;
        }else if(x2>x1)
        {
            pathan++;
        }else{
            draw++;
        }
    }

    if(tiger>pathan){
         printf("Tiger");
    }else if(pathan>tiger){
         printf("Pathan");
    }else{
         printf("Draw");
    }
    return 0;
}