//sample input;
/*  6
    1 3 5 4 6 3
    5
//SAMple output:
  case1:3
*/
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
    ck=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            ck=1;
            loc=i+1;
        }
    }
    if(ck=1)
    {
        printf("yes- location is %d",loc);
    }
    else
    {
        printf("no");
    }
    return 0;
}
