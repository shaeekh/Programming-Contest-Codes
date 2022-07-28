#include<bits/stdc++.h>
using namespace std;
#define maxi  200005
#define maxi2 1000000
int a[maxi];
int cnt[maxi];
int start[maxi];
int stree[maxi2];
void make_tree(int node,int s,int e)
{
    if(s==e)
    {
        stree[node]=cnt[a[s]];
        return;
    }
    int le=2*node;
    int ri=(2*node)+1;
    int mid=(s+e)/2;
    make_tree(le,s,mid);
    make_tree(ri,mid+1,e);
    stree[node]=max(stree[le],stree[ri]);
}
int query(int nodeNumber,int s,int e,int r1,int r2)
{
     if( e < r1 || s > r2 ) return -1;
 if( s >= r1 && e <= r2 ) return stree[ nodeNumber ];
 int n1 = ( 2 * nodeNumber ) ;
 int n2 = ( 2 * nodeNumber ) + 1;
 int md = ( s + e ) / 2;
 int v1 =query( n1, s, md , r1, r2 );
 int v2 =query( n2, md + 1, e, r1, r2 );
 return max(v1,v2);
// return ret;
}
int main()
{
    //freopen("a.txt", "r", stdin);
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int q;
        cin>>q;
        memset(cnt,0,sizeof(cnt));
        memset(start,-1,sizeof(start));
        memset(a,0,sizeof(a));
        //memset(stree,-500,sizeof(stree));
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]+=100000;
            cnt[a[i]]++;
            if(cnt[a[i]]==1)
                start[a[i]]=i;
        }
       // printf("shesh\n");
        make_tree(1,1,n);
        //printf("tree banano\n");
        for (int i=1;i<=q;i++)
        {
            int b,c;
            cin>>b>>c;
            if(a[b]==a[c])
                printf("%d\n",c-b+1);
            else
            {
                int c1=(cnt[a[b]]-(b-start[a[b]]));
                 //cout<<cnt[a[b]]<<" "<<b<<" "<<start[a[b]]<<endl;
                int c2=c-start[a[c]]+1;
               // cout<<"c1 and c2 "<<c1<<" "<<c2<<endl;
                c1=max(c1,c2);
                int r1=cnt[a[b]]+start[a[b]];
                int r2=start[a[c]]-1;
                int c3=query(1,1,n,r1,r2);
             //   cout<<"c3 "<<c3<<endl;
                c1=max(c1,c3);
                printf("%d\n",c1);


            }

        }

}
}
