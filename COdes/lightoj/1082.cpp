#include<bits/stdc++.h>

using namespace std;
#define maxi 100004
int a[maxi];
int tree[maxi*3];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }
    int left=2*node;
    int right=(2*node)+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init (right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);


}
int query(int node,int b,int e,int i,int j)
{
    //int res=maxi;
    if(e<i || b>j)
        return maxi;
    if(b>=i && e<=j)
        return tree[node];

    int left=2*node;
    int right=(2*node)+1;
    int mid=(b+e)/2;
    //init(left,b,mid);
    //init (right,mid+1,e);
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return min(p1,p2);

    }



//int a[maxi];
//int tree[maxi];
int main()
{
    int t;
    //cin>>t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {
     //   getchar();
        //memset(a,0,sizeof(a));

        int n,q;
        scanf("%d %d",&n,&q);
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);

        }
        init(1,1,n);
        printf("Case %d:\n",++co);
        while(q--)
        {
            int m,v;
            scanf("%d %d",&m,&v);
            int bell=query(1,1,n,m,v);
            printf("%d\n",bell);
          //      memset(tree,0,sizeof(tree));


        }


    }

}
