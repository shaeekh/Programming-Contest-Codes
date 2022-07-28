#include<bits/stdc++.h>
using namespace std;
vector<int> v;
map<int,int> m;
int gcd(int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);

}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
   // for (int )
    for (int i=1;i<=m;i++)
    {
        int g,x,y;
        cin>>g>>x>>y;
       // cout<<g<<x<<y;
       bool op=false;
        for (int j=1;j<=n;j++)
        {
            int gd=gcd(g,a[j]);
            cout<<gd<<endl;
            if(gd!=1)
            {
                op=true;
                if(x<=j && j<=y)
                    v.push_back(a[j]);

            }
        }
        if(!op)
        {



        sort(v.begin(),v.end());
  //      for (int  p=v.size();p>=0;p--)
      //  {
//            cout<<v[p]<<endl;
//            m[ab];
    //    }



    int l=v.size();
    printf("%d \n",v[l]);
        }
        else
            printf("-1 -1\n");


}
}

