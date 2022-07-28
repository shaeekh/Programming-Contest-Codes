#include<bits/stdc++.h>
using namespace std;
struct time
{
    int st;
    int et;
}c[100007];
bool comp (struct time a,struct time b)
{
    if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et<b.et;
}
int main()
{
    int t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {


    int n;
    //cin>>n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&c[i].st);
        scanf("%d",&c[i].et);
       // cin>>c[i].et;
    }
    sort(c,c+n,comp);

    int ans=0;
    int prev=-1;
    for (int i=0;i<n;i++)
    {
        if(c[i].st>=prev)
        {
            ans++;
            //cout<<c[i].st<<" "<<c[i].et<<endl;
            prev=c[i].et;
        }

    }
    printf("%d\n",ans);
    }
}



