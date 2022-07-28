#include<bits/stdc++.h>
using namespace std;
void bub(int ar[],int n)
{


 int var=n,t,temp;
int dm=0;
    while(var!=0)
    {

        t=0;
        for (int i=1;i<=var-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                dm++;
                temp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = temp;
                t=i;

            }
           // dc++;

        }

        var=t;
    }
    printf("Optimal train swapping takes %d swaps.\n",dm);
}
int main()
{
    int t;
    cin>>t;
    int n;
    for (int i=1;i<=t;i++)
    {
        cin>>n;
        int a[n];
        for (int i=1;i<=n;i++)
        {cin>>a[i];
        }
        bub(a,n);
    }
}
