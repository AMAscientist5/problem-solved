int main() {

    int n;
    scanf("%d", &n);


        if(n<=0)
        {
           while(n!=2)
           {
              printf("%d ", n++);
           }   
         
        }
        else{
            for(int i=1; i<=n; i++)
            {
                printf("%d ", i);
            }
        }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
