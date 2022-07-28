#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for (int st=1;st<=T;st++)
    {


    int n,t,m;
    cin>>n>>t>>m;
    int t2=0;
    int t1;
    string s2;
    string s3="left";
    queue<int> q;


    for (int i=1;i<=m;i++)
    {
        cin>>t1>>s2;
        if(s2==s3)
        {
            if(t2>=t1)
            {
                if(s2=="left")
                s3="right";
                else
                    s3="left";
                t2+=t;
                cout<<t2<<endl;





            }
        }


    }
}
}

