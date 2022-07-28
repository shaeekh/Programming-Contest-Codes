#include<bits/stdc++.h>
using namespace std;
#define maxi 100005
int a[maxi];
int tree[maxi*3];
map<int,int> mp;
void init(int  node,int b,int e )
{
    if(b==e)
    {
        tree[node]=mp[b]++;
        return;
    }
    int mid=(b+e)/2;
    int left=2*node;
    int right=(2*node)+1;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=mp[node]++;


}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
    return 0;
    if(i>=b && j<=e)
        return tree[node];
    int mid=(b+e)/2;
    int left=2*node;
    int right=(2*node)+1;
    int p1=(left,b,mid,i,j);
    int p2=(right,mid+1,e,i,j);
    return (max(p1,p2));


}
int main()
{
    int n,q;
    while(cin>>n)
    {
        if(n==0)
            break;
        int q;
        cin>>q;
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];

        }
        init(1,1,n);
        while(q--)
        {
            int m,v;
            scanf("%d %d",&m,&v);
            int res=query(1,1,n,m,v);
            printf("printing tree\n");
            for (int i=1;i<=n*3;i++)
            {
                cout<<tree[i]<<" ";
            }
            cout<<endl;
            cout<<res<<endl;

        }

    }

}
