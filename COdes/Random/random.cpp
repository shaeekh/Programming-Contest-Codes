#include<bits/stdc++.h>
using namespace std;
struct cust
{
    int t;
    int mark;
}c[100];
bool cmp(struct cust a,struct cust b)
{
    if(a.t==b.t)
        return a.mark<b.mark;
    else
        return a.t<b.t;

}
int main()
{
    int j=0;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int st,et;
        cin>>st>>en;
        c[j].t=st;
        c[j].mark=0;
        j++;
        c[j].t=et;
        c[j].mark=1;
        j++;

    }
    sort(c,c+2*n,cmp);

     int ans=0;
     int final=-1;
     for (int i=0;i<j;i++)
     {
         if(struct cust[i].mark==0)
            ans++;
         else
            ans--;
            //ans e finally 0 hobe karon shobai
            //eshe shobai chole jacche
         final=max(ans,final);
     }

    }
}
