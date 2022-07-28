#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
        L[i]=1000000;
        R[j]=100000;
    i = 0;
    j = 0;
    for(k=l;k<r;k++)
    {
         if (L[i] < R[j])
        {
            arr[k] = L[ i++];

        }
        else
        {
            arr[k] = R[j++];
         }
    }

}
void mergeSort(int arr[], int l, int r)
{
   if (l < r)
   {
      int m = l+r/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge(arr, l, m, r);
   }
}

int main()
{
    int n;
    cout<<"enter array number : ";
    cin>>n;
    int a[n];
     srand(time(0));
    for(int i=0 ; i<n;i++)
    {
        a[i]=(rand()%n)+1;
    }
     cout<<"entered array elements : ";
     for ( int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    mergeSort( a, 0, n-1);
    cout<<"\nsorted array elements : ";
    for ( int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }

    return 0;
}
