#include<bits/stdc++.h>
using namespace std;

void jora(int a[],int l,int r,int m)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2];
    for (int i=0;i<n1;i++)
        L[i]=a[l+i];
     for (int i=0;i<n2;i++)
        R[i]=a[m+1+i];
        L[n1]=10000000;
        R[n2]=10000000;
        int s=0;
        int b=0;
        for (int k=l;k<=r;k++)
            {
                if(L[s]<=R[b])
                {
                    a[k]=L[s];
                    s++;
                }
                else
                {
                    a[k]=R[b];
                    b++;
                }
            }
        }
        void vanga(int a[],int l,int r)
{
        int m;
    if(l<r)
  {

   m=(l+r)/2;
    vanga(a,l,m);
    vanga(a,m+1,r);
    jora(a,l,r,m);
}
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vanga(a,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }


}
