#include<bits/stdc++.h>
using namespace std;
void select(int a[],int n)
{
    for (int j=n;j>=2;j--)
    {
        int t=1;
        for (int k=2;k<=j;k++)
        {
            if(a[t]<a[k])
                t=k;
        }
        swap(a[j],a[t]);
        printf("temporary\n");
         for (int i=1;i<=n;i++)
        cout<<a[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //vanga(a,0,n-1);
    select(a,n);
    printf("finally\n");
    for (int i=1;i<=n;i++)
        cout<<a[i]<<endl;
}
