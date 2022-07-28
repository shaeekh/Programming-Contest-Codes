#include<bits/stdc++.h>
using namespace std;
struct time
{
    int st;
    int et;
}c[100005];
bool comp(struct time  a,struct time b)
{
    if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et<b.et;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
{

    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>c[i].st;
        cin>>c[i].et;

    }
    sort(c,c+n,comp);
    int ans=0;
    int prev=-1;
//    int ans=0;
    for (int i=0;i<n;i++)
    {
        if(c[i].et>prev)
        {
            prev=c[i].et;
            ans++;
        }
    }
    cout<<ans<<endl;

}
}
