#include<bits/stdc++.h>
using namespace std;
struct time
{
    int st;
    int et;
}c[1004];
bool cmp(struct time a,struct time b)
{
 if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et<b.et;

}

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        cin>>c[i].st;
        //cout<<c[i].st<<" ";
        cin>>c[i].et;
        //cout<<c[i].et<<endl;
    }
    sort(c,c+n,cmp);
   bool flag=true;
    for (int i=1;i<n;i++)
    {

        if(c[i].st>c[i-1].et || c[i].st-c[i-1].et>1)
            {
               // printf("eise ");
                //cout<<c[i].st<<endl;
                //cout<<"i is "<<i<<" ";
                flag=false;
            }
    }
    bool flag2=true;
    if(flag==false)
        {
            printf("NO\n");
            return 0;
        }
    else
    {
        for (int i=0;i<n;i++)
        {
            if(c[i].et<=m || c[i].st<=m)
                flag2=false;
            printf("YES\n");
            return 0;
        }
        if(flag2==true)
            {
                printf("NO\n");
                return 0;


}
}
}
