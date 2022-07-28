#include<bits/stdc++.h>
using namespace std;
struct time

{
    int val;
    int mark;
}c[100];
bool comp(struct time a,struct time b)
{
    if(a.val==b.val)
        retun a.mark<b.mark;
    else
        return a.val<b.val;
}
int main()
{
    int n;
    cin>>n;
    int j=0;
    for (int i=0;i<n;i++)
    {
        int st,et;
        cin>>st>>et;
        c[j].val=st;
        c[j].mark=0;
        j++;
        c[j].val=et;
        c[j].mark=1;
        j++;
    }
    sort(c,c+2*n,comp);
}
