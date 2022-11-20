#include<stdio.h>
int main()
{
    int i,a;
    scanf(" %d " , &a);
    if (a==1)
        printf("this is not a prime numnber");

    else{
        for(i=2;i<=a;i++)
        {
            if(a%i==0)
                break;
        }
        if(i!=a)
            printf("this is not prime number\n");
        else
            printf("this is prime number\n");
    }
    return 0;
}
