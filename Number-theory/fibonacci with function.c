
#include<stdio.h>
 long fibonacci(int n)
 {
     if(n==1||n==2)
     {
         return 1;


     }
     return fibonacci(n-1)+fibonacci(n-2);


 }


int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%ld\n",fibonacci(i));
    }
    return 0;

}
