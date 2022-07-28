#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN=10000+2;
int N,P[MAXN];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>N;
        for(int i=0; i<N; i++)
        {
            cin>>P[i];
        }
        if(N&1==1) P[N++]=0;
        sort(P,P+N);
        int res=0;
        for(int i=0; i+1<N; i+=2)
        {
            cout<<"N is "<<N<<endl;
            cout<<"i is "<<i<<endl;
            res ^= (P[i+1]-P[i]-1);
        }
        if(res==0) cout<<"Bob will win"<<endl;
        else cout<<"Georgia will win"<<endl;
    }
    return 0;
}
