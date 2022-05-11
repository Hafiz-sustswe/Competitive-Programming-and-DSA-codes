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

            loc=i+1;
            break;

        }
    }
    if(loc==0)
    {
        printf("no");
    }
    else
    {
    printf("yes- location is %d",loc);
    }
    return 0;
}
