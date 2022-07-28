#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("inp.txt","r",stdin);
    int n,m;
    while(cin>>n>>m)
    {
        int res=0;
        for (int i=1;i<=m;i++)
        {
            int a[n];
            int sum=0;
            int b;
            cin>>b;
            for (int j=0;j<n;j++)
            {
                cin>>a[j];
                sum+=a[j];
            }
            bool jitse=false;
            if(sum<=b)
            {
                jitse=true;
            }
            int taka[5]={10000,1000,100,10,1};

            for (int j=0;j<5;j++)
            {
                sum+=taka[j];
                sum-=a[0];
                if(sum<=b)
                {
                    if(jitse)
                    {
                        res+=abs(a[0]-taka[j]);
                    }
                    else
                    {
                        res+=taka[j];
                    }
                    break;
                }
                else
                {
                    sum-=taka[j];
                    sum+=a[0];
                }

            }


        }
        cout<<res<<endl;
    }
}
