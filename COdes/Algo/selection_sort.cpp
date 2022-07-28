#include <stdio.h>
#include<iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        int mini=i;
        for (int j=i+1;j<n;j++)
        {


        if (arr[j]<arr[mini])
        {
            mini=j;
        }

        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(a,n);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
