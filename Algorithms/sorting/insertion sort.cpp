
/*
Course Name:DATASTRUCTURE AND ALGORITHM
Homework   :Assignmnet on insertion Sort
Date       :05/06/21
Written by :MD Sadman Hafiz
Reg No.    :2018831057
*/

#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[] ,int n)
{
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;


}


void insertion( int a[], int n)
{
    for( int i=1;i<n;i++)
    {
       int j=i-1;
       int x= a[i];
       while( j>-1 && a[j] > x)
       {
            a[j+1] =a[j];
            j--;
       }
       a[j+1]=x;
        cout<<"Pass "<<i <<":  ";
        print_array(a,n);

    }


}

int main()
{
    int a[] ={ -5 ,33,44,11,88,22,66,55};
    cout<<"Initial Array Befor sort:";
    for(int i=0;i<8;i++)
        cout<<a[i]<<" ";

    cout<<endl<<endl;
    insertion(a,8);
    cout<<"Final array after sort:";
    for(int i=0;i<8;i++)
        cout<<a[i]<<" ";

    cout<<endl;

     return 0;
}
