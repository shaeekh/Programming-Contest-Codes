#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i;
    string st;
    for (i=1;i<=t;i++)
    {

       cin>>st;
        int p,q,w;
        p=st.length();
        q=st[0];
        w=st[p-1];

        if (p<=10)
       cout<<st<<endl;
        else
            printf("%c%d%c\n", q, p-2, w);;
    }
    return 0;
}
