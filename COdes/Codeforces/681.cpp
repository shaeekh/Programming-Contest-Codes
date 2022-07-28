#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    int b,c;
    map<string,int> m;
    bool increase=false;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        cin>>b;
        m[a]=b;
        cin>>c;
        if(m[a]>=2400 && c>m[a])
        {
            increase=true;
            //printf("YES\n");

        }
        }
        if(increase==false)
            printf("NO\n");
            else
                printf("YES\n");
}
