#include<bits/stdc++.h>
using namespace std;
struct time
{
    int st;
    int et;
}c[100004];
bool cmp(struct time a,struct time b)
{
    cout<<a.st<<" "<<a.et<<endl;
    cout<<b.st<<" "<<b.et<<endl;
    if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et<b.et;


}
int main()
{

    int n,m;
    cin>>n,m;
    for (int i=0;i<n;i++)
    {
        cin>>c[i].st;
        cin>>c[i].et;
    }
        sort(c,c+n,cmp);
        //for (int i=0;i<n;i++)
   // {
     //   cout<<c[i].st<<" ";
       // cout<<c[i].et<<" ";
        //cin>>c[i].et;
    //}
     //   int ans=0;
   //     int prev=-1;


    for (int i=0;i<n;i++)
    {
        cout<<c[i].st<<"  "<<c[i].et<<endl;
    }
    bool flag=true;
    for (int i=1;i<n;i++)
    {
        if(c[i].st<=c[i-1].et)
            continue;
        else
            {
               // printf("eise ");
                //cout<<c[i].st<<endl;
                //cout<<"i is "<<i<<" ";
                flag=false;
            }
    }
    if(flag==false)
        printf("NO\n");
    else
        printf("YES\n");

    //cout<<ans<<endl;
}

