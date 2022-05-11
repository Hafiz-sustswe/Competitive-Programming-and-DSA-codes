///12 23 30 32 38 42 50 60 65 70 85 90 100


#include<stdio.h>
int main()
{   int a[13] = {12, 23,30,32,42,50,60,65,70,85,90,100 };
    int i,start,end,mid,key;
    start=0;
    end=12;
    key=32;
    do{ mid = (int)((start+end)/2);
    printf("start:%d\t End:%d\t mid:%d\t key:%d\t a[mid]:%d\n",start,end,mid,key,a[mid]);
        if(a[mid] == key)
            {printf("find at %d\n",mid+1);
            break;}
        else if(a[mid]>key)
        {
            end = mid-1;
        }
        else{(start = mid+1);}

       }
    while(end >= start);
    if(start>end)
    {
        printf("failed\n");
    }
}
