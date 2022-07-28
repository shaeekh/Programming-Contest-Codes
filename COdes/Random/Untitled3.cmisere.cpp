#include<bits/stdc++.h>
using namespace std;
int main()
{
    int co=0;
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        long long int ans=0;
        bool df=true;
        int con=0;
        for (int i=1;i<=k;i++)

        {
            long long int a;
            cin>>a;
            if(a!=1)
                df=false;
            if(df==false)

            {
               ans=ans^a;
            }
            else if(df==true)
                con++;

            if(i==k)
            {
                if(con%2==0)
                    ans=ans^0;
                else
                    ans=ans^1;
            }





        }
        if(df==true)
        {
            if(con%2==1)
              printf("Case %d: Bob\n",++co);
            else
                 printf("Case %d: Alice\n",++co);


        }

        else if(ans!=0 && df==false)
            printf("Case %d: Alice\n",++co);
        else
            printf("Case %d: Bob\n",++co);
    }
}
