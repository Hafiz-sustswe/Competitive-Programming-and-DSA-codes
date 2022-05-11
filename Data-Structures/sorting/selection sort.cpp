/*
Course Name:DATASTRUCTURE AND ALGORITHM
Homework   :Assignmnet on Selection Sort
Date       :05/06/21
Written by :MD Sadman Hafiz
Reg No.    :2018831057
*/


#include<bits/stdc++.h>
using namespace std;
void swapp (int *a , int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;

}
void print_array(int arr[] ,int n)
{
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;


}
void selection( int a[], int n)
{
    int i,j,k;
    for( int i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            k=j;

        }
        swapp(&a[i], &a[k]);
        cout<<"Pass "<<i+1<<":  ";
        print_array(a,n);

    }
    cout<<endl;

}

int main()
{
    int a[] ={ 77 ,33,44,11,88,22,66,55};
    cout<<"Initial Array Befor sort:";
    for(int i=0;i<8;i++)
        cout<<a[i]<<" ";

    cout<<endl<<endl;
    selection(a,8);
    cout<<"Final array after sort:";
    for(int i=0;i<8;i++)
        cout<<a[i]<<" ";

    cout<<endl;

    return 0;
}

