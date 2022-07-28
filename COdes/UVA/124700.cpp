#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
int n;
    for(int i=1; i<=t;i++){

        scanf("%d",&n);
string s;
        char ch[n],dum;
        int b=0,w=0,a=0,t=0;

//        for(int x=0;x<n;x++){
//            scanf("%c",&ch[x]);
//        }
cin>>s;
        for(int j=0;j<n;j++){
            //scanf("%c",&ch[j]);

            if(s[j]=='B') ++b;
            if(s[j]=='W') ++w;
            if(s[j]=='T') ++t;
            if(s[j]=='A') ++a;

        }

        if(b<=n && w==0 && t==0 && b!=0) printf("Case %d: BANGLAWASH\n",i);
        else if(w<=n && b==0 && t==0 && w!=0) printf("Case %d: WHITEWASH\n",i);
        else if(a==n) printf("Case %d: ABANDONED\n",i);
        else if(b==w) printf("Case %d: DRAW %d %d\n",i,b,t);
        else if(b>w) printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(b<w) printf("Case %d: WWW %d - %d\n",i,w,b);

//scanf("%d",&n);
//dum=getchar();


    }
  //cout<<endl;
    return 0;
}
