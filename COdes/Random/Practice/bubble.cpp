#include<bits/stdc++.h>
using namespace std;
void bubble(int ar[],int n)
//int main()
{
    int k;
    k=n;
    while(k!=0)
    {
        int t=0;
        for (int i=0;i<=n-2;i++)
            if(ar[i]>ar[i+1])
            {swap(ar[i],ar[i+1]);
            t=i;
            }
            k=t;
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
    bubble(a,n);
    printf("kotha hoilo gia\n");
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
