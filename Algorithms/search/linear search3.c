#include<stdio.h>
int main()
{
    int n,i,ck,loc,key,arr[i];
    scanf("%d",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    loc=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            break;

        }
    }
    if(i==n)
    {
        printf("no");
    }
    else
    {
    printf("yes- location is %d",i+1);
    }
    return 0;
}
