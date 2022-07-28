#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int coo=0;
    while(t--)
    {
        int n;
        string s2;
        bool flag=true;

        scanf("%d",&n);

            string s;
            cin>>s;
            int l,w,h;
            scanf("%d %d %d",&l,&w,&h);
            long long int ans=l*w*h;
            long long int gy=ans;
             for (int i=2;i<=n;i++)
        {
             string s1;
            cin>>s1;
            int l1,w1,h1;
            scanf("%d %d %d",&l1,&w1,&h1);
            long long int ans=l1*w1*h1;
            if(ans>gy)
            {
                flag=false;
                s2=s1;
                //do work;
                //break;
            }
            else
            {
                gy=ans;
            }

        }
        if(!flag)
      //  printf("Case %d: %s took chocolate from all\n",++coo,s2);
      cout<<"Case "<<++coo<<": "<<s2<<" took chocolate from all"<<endl;
        else
            printf("Case %d: no thief\n",++coo);
    }
}
