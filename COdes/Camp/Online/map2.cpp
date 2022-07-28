#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string> mp;
    int n;
    cin>>n;
    getchar();
    for (int i=1;i<=n;i++)
    {
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        mp[s1]=s2;
        mp[s2]=s1;
    }
    int q;
    cin>>q;
    getchar();
    map<string,string>::iterator it;
    for (int j=1;j<=q;j++)
    {
        string s;
        getline(cin,s);
        it=mp.find(s);
        cout<<it->second<<endl;
    }
}
