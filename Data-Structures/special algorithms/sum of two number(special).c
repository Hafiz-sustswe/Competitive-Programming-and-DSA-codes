///input a <=+60500, b> -32700  ||  b< 32700....with least memory

///for a,we need 2 bytes,for b,2.   and for sum,we need 3 bytes.

#include<stdio.h>
int main()
{
    unsigned int a;
    int b;
    unsigned long int c;
    printf("enter a positive integer <= 60500:");
    scanf("%d",&a);
    printf("enetr a an integer number <= 32700  and >-32700:");
    scanf("%d",&b);
    c = a+b;
    printf( "sum   =  %1d",c);
    return 0;


}
