#include <stdio.h>
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        int flag=0;
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j+1]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
        }

    }
    if (flag==0)
        break;

}
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }
    bubble_sort(ar,n);
    for (int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }

}
