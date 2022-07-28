#include<bits/stdc++.h>
using namespace std;
bool iseven(long long int x)
{
    if(x%2==0)
        return true;
    return false;
}
bool isodd(int x)
{
    if(x%2==1)
        return true;
    return false;

}
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
       long long int w;
        cin>>w;
     // long long   int n=w/2;
        long long int m=1;
        if(isodd(w))
            printf("Case %d: Impossible\n",i);
        else
        {
            while(!isodd(w))
            {
                m=m*2;
                //n=n/2;
                w=w/2;

            }
            printf("Case %d: %lld %lld\n",i,w,m);

        }

    }
}
