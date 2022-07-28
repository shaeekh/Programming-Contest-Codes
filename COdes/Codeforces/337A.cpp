#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d", &n,&m);
    int a[m];
    for (int i=0;i<m;i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a,a+m);
    for (int i=0;i<m;i++)
    {
        cout<<a[i]<<endl;

    }
    cout<<endl<<endl;

        if (n==2 && a[m-1]==a[m-2])
    {
        cout<<0<<endl;
    }
    else{
    int dif=a[n-1]-a[0];
    int mi,ma;
    for (int i=1;i<=m-n;i++)
    {
        cout<<a[i]<<endl<<endl;
        if (a[i+n-1]-a[i]<dif)
           {

            dif=a[i+n-1]-a[i];
            mi=a[i];
            ma=a[i+n-1];
    }
    }
    cout<<dif<<endl;
    cout<<mi<<endl;
    cout<<ma<<endl;
}

}
