///bubble sort
/** sort an array

    input:
    5
    8 3 1 6 2
    output:
    1 2 3 6 8
*/
#include<stdio.h>  /// temp is used for interchanging int data///
int main()
{
    int arr[1000];
    int i,j,temp ,n;
    while(scanf("%d",&n) !=EOF){
            for(i=0; i < n; i++)
                { scanf("%d" ,&arr[i]);}
    for(i=0;i<n;i++){
    for (j=i+1;j<n;j++)
    {
        if (arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
    return 0;
}
