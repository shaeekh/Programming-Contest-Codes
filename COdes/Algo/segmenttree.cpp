#include<bits/stdc++.h>
using namespace std;
#define maxi 495
int a[maxi];
int tree[maxi*3];
void initi(int node,int be,int en)
{
    if(be==en)
    {
        tree[node]=a[be];

        return;
    }
    else
    {
        int mid=(be+en)/2;
        int left=(be*2);
        int right=(be*2)+1;
        initi(left,be,mid);
        initi(right,mid+1,en);
        tree[node]=tree[left]+tree[right];// this line applicable only if sum between a definite range is wanted
      //  cout<<tree[left]<<" "<<tree[right]<<endl;

    }


}
int query (int node,int b,int e,int i,int j )
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=(2*node)+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;//applicable only if sum wants

}
void update(int node,int b,int e,int i,int value)
{
    if(i>e || i<b)
    {
        return ;
    }
    if(b>=i && e<=i)
    {
        tree[node]=value;
        return;
    }
        int left=node*2;
        int right=(node*2)+1;
        int mid=(b+e)/2;
        update(left,b,mid,i,value);
        update(right,mid+1,e,i,value);
        tree[node]=tree[left]+tree[right];
    }



int main()
{
    int n;
    cin>>n;

    for (int i=1;i<=n;i++)
        cin>>a[i];
    initi(1,1,n);

}
