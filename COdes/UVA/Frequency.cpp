#include<bits/stdc++.h>


using namespace std;
#define maxi 4595
#define S 100000
   int a[maxi];
   int cnt[maxi];
   int start[maxi];
   int artree[maxi*4];

   void maketree(int node,int s,int e )
   {
       if(s==e)
       {
        artree[node]=cnt[a[s]];

        return;

       }
       int mid=(s+e)/2;
       int le=2*node;
       int ri=2*node+1;
       maketree(le,s,mid);
       maketree(ri,mid+1,e);
       artree[node]=max(artree[le],artree[ri]);
   }
   int query(int node,int s,int e,int r1,int r2)
   {
       if(r1>e  || r2<s)
        return -1;
       if(s>=r1 && e<=r2)
        return artree[node];
       int le=2*node;
       int re=2*node+1;
       int mid=(s+e)/2;
       int v1=query(le,s,mid,r1,r2);
       int v2=query(re,mid+1,e,r1,r2);
       return max(v1,v2);
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
        memset( cnt, 0, sizeof( cnt ) );
        memset( start, -1, sizeof( cnt ) ) ;

        for (int i=1;i<=n;i++)
            {
                cin>>a[i];
                a[i] =a[i]+100;
                cnt[a[i]]++;
                   if( cnt[ a [ i ] ] == 1 ) start[ a[ i ] ] = i;
            }
            maketree(1,1,n);


        for (int i=1;i<=q;i++)
        {
            int b,c;
            cin>>b>>c;
            if(a[b]==a[c])
            {
                printf("%d\n",(c-b)+1);
            }
            else
            {
                int cn1=cnt[a[b]]-(i-start[a[b]]);
                cout<< cnt[a[b]]<<start[a[b]]<<endl;
                int cn2=c-start[a[c]]+1;
                int p1=start[a[b]]+cnt[a[b]];
                int p2=start[a[c]]-1;
                int cn3=query(1,1,n,p1,p2);
                cout<<"couts "<<cn1<<" "<<cn2<<" "<<cn3<<endl;
               int ans=max(cn1,cn2);
              ans=max(ans,cn3);
               printf("%d\n",ans);
            }




        }

    }


}
