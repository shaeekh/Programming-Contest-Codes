/*Writer: Shaeekh Al Jahan
ID:16-01-04-077*/
#include<bits/stdc++.h>
using namespace std;
void mergeit(int l[],int r[],int a[],int nl,int nr)
{
    int i=0,j=0,k=0;
    while(i<nl && j<nr)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;

        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<nl)
    {
        a[k]=l[i];
        i++;
        k++;

    }
    while(j<nr)
    {
        a[k]=r[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int n)
{
    if(n<2)
    {
        //printf("return hocche \n");
        return;
    }
    int mid=n/2;
    int l[mid];
    int r[n-mid];
    for (int i=0;i<mid;i++)
        l[i]=a[i];
    for (int i=mid;i<n;i++)
        r[i-mid]=a[i];
    mergesort(l,mid);
    mergesort(r,n-mid);
    mergeit(l,r,a,mid,n-mid);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    printf("The elements are\n");
    for (int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,n);
    printf("After being sorted\n");
    for (int i=0;i<n;i++)
        cout<<a[i]<<endl;

}
