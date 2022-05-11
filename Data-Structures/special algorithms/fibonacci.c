#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);

    int i, n[100];
    n[0]= 0;
    n[1]= 1;
    for(i=2; i<= a;i++);/// upto 10
    {
        n[i]= n[i-2] + n[i-1];
       }
     printf("%d \n", n[i]);


}
