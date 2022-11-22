#include<bits/stdc++.h>
using namespace std;

void bubble( int a[],int n)
{
    for( int i=0;i<n-1;i++)
    {
        for( int j=0;j<n-1-i;j++)
        {
            int temp;
            if( a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j]=temp;
            }

        }

    }



}
int main()
{
    int a[] ={ 4,6,2,8,5,3};
    bubble(a,6);

    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";


}
