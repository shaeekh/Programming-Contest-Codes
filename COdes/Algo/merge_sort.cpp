#include<stdio.h>
#include<iostream>
using namespace std;
void mergeit(int L[],int R[],int A[],int nL,int nR )
{

    int i=0,j=0,k=0;
    while (i<nL && j<nR)
    {
        if (L[i]<=R[j])
        {
            A[k]=L[i];

            i++;

        }
        else
        {
            A[k]=R[j];

            j++;
        }
        k++;
    }
    while (i<nL)
    {
        A[k]=L[i];
        k++;
        i++;

    }
    while (j<nR)
    {
        A[k]=R[j];
       k++;
       j++;
    }
}
void mergesort(int A[],int n)

{
    //int n=sizeof(A)/sizeof(A[0]);
    if (n<2)
    {
        return;
    }
    else
    {
     int mid=n/2;
     int left[mid];
     int right[n-mid];
     for (int i=0;i<mid;i++)
      {
         left[i]=A[i];
      }
        for (int i=mid;i<n;i++)
       {
        right[i-mid]=A[i];
        }


    mergesort(left,mid);
    mergesort(right,n-mid);
    mergeit(left,right,A,mid,n-mid);

}

}


int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    mergesort(ara,n);
    for (int i=0;i<n;i++)
    {
        cout<<ara[i]<<endl;
    }

}
