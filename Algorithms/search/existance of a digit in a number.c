#include<stdio.h>
int main()
{
    int m,n,digit;
    printf("enter a positive number:\n");
    scanf("%d", &n);
    printf("enter a digit\n");
    scanf("%d",&m);
    while(n)
    {
        digit = n%10;
        n = n/10;
        if(digit == m)
        {
            printf("this digit is found in the number\n");
            goto end;
        }
    }
    printf("this is not foundo on the number\n ");
    end:
        return 0;


}
