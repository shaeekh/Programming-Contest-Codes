#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int ma=0;
    int mi=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];


if(a[i]>a[ma])
            ma=i;
        else if (a[i]<=a[mi])
            mi=i;
    }
    if(ma>mi)
        ma-=1;
    int r=(n-1-mi)+ma;
    printf("%d\n",r);

}
