#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<6;i++)
    {
        for(j=1;j<=6-i;j++)
            printf("   ");
        for(k=i;k>0;k--)
            printf("%d  ",k);
        for( k=0;k<=i;k++ )
            printf("%d ",k);
        printf("\n");

    }
    return 0;
}
