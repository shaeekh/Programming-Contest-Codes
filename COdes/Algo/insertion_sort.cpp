#include <iostream>
#include <stdio.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for (int i=1;i<=n;i++)
    {
        int value=arr[i];
        int hole=i;
        while (hole >=1 && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
    }
}
int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
