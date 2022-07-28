#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long int b,long long int p,long long int m)
{
   if(p==0)
    return 1;
   if (p%2==0)
   {
      long long  int y=bigmod(b,p/2,m);
        return (y*y)%m;
   }
   else
   {
       return (b*bigmod(b,p-1,m))%m;
   }

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int odd=bigmod(n,2,m);
        cout<<odd<<" ";
       if(m==1)
          cout<<"1"<<endl;
        else
        {



        long long int even1=(odd+(n%m))%m;
//        long long int even2=even1+
        cout<<even1<<endl;
        }


    }
    return 0;
}
