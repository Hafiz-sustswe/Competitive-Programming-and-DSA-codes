#include<stdio.h>
void towOh(int n, int source, int aux ,int dest)
{
    if(n==1)
    {
        printf("move the disc from tower no: %d to tower no:%d\n",source,dest);
        return;
    }
    ///now movw all n-1 disc to aux
    towOh(n-1,source,dest,aux);
    towOh(1,source,aux,dest);
    towOh(n-1,aux,source,dest);
}
int main()
{
    towOh(3,1,2,3);///4 parameters- number of discs,source tower,auxiliary tower,destination tower
    return 0;
}





