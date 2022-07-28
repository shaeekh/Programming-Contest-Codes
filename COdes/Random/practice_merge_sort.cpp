#include<bits/bits/stdc++.h>
using namespace std;
void mergeit(int l[],int r[],int a[],int nL,int nR)
{

}
void mergesort(int a[],int n)
{
    if(n<2)
        return return;
    else
    {
        int mid=(n/2);
        int left[mid];
        int right=[n-mid];
        for (int i=0;i<mid;i++)
            left[i]=a[i];
        for (int i=mid;i<n;i++)
            right[i]=a[i];
        mergesort(left,mid);
        mergesort(right,n-mid);
        mergeit(left,right,a,mid,n-mid);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
        mergesort(a,n);
}
