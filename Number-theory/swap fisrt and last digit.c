#include<stdio.h>
#include<math.h>

int main()
{
    int n,first,last,digits;
    scanf("%d",&n);
    digits = (int ) log10(n);
    last = n%10;
    first = (int) n/pow(10,digits);
    int swap = n % (pow(10,(digits-1)));
    swap -= last;
    swap += first;
    swap += pow(10,digits);


    printf("after swap %d ",swap);

}

