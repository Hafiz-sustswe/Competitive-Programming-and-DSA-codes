
#include<bits/stdc++.h>
using namespace std;
void swapp (int *a , int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;

}
int partiton( int a[],int l,int h)
{
        int pivot = a[l];
        int i=l,j=h;
         do
         {
          do{i++;}while(a[i] <= pivot);
          do{j--;}while(a[j] > pivot);
            if(i<j) swapp(&a[i],&a[j]);

         }while(i<j);
         swapp(&a[l], &a[j]);


         return j;

}
void QuickSort( int a[], int l,int h)
{
    int j;
   if(l<h)
    {
        j = partiton(a,l,h);
        QuickSort(a,l,j);
        QuickSort(a,j+1,h);
    }


}

int main()
{
    int a[] ={ 4,6,2,8,5,3,INT32_MAX};
    QuickSort(a,0,6);

    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";


}


