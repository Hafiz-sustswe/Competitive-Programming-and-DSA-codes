#include<stdio.h>
#include<math.h>

int main()
{
    int n,first,last,digits;
    scanf("%d",&n);
    digits = (int ) log10(n);
    last = n%10;
    first = (int) n/pow(10,digits);

    printf("first=%d ,last = %d ",first,last);

}
