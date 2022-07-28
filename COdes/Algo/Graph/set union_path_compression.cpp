#include<bits/stdc++.h>
using namespace std;
#define max 9494
int par[max];
void init()
{
    for (int i=0;i<n;i++)
    {
        par[i]=i;
    }
}
//without path compression
/*
int findr(int r)
{
    if(par[r]==r)
        return r;
    else
        return findr(par[r]);
}
*/
//with path compression
/*int findr(int r)
{
    if(par[r]==r)
        return r;
    else
        return par[r]= findr(par[r]);
}
*/
int main()
{
    int n,m;
    //cin>>n;
    cin>>m;
    for (in i=0;i<m;i++)
    {
        cin>>x>>y;
        int u=finr(x);
        int v=findr(y);
        if(u==v)
            continue;
        else
            par[y]=x;
    }

}
