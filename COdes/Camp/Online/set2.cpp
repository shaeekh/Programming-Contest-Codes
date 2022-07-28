#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
    for (int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        map<char,int> mp;
        int l=s.size();
        for (int j=0;j<s.size();j++)
        {
          mp[s[j]]++;
        }
        int c=0;
        map<char,int> :: iterator it;
        it=mp.begin();
        char d=it->first;
        for (it=mp.begin();it!=mp.end();it++)
        {
            if(it!=mp.begin())
                if(it->second==d)
            {
                c++;
                break;
            }

        }


    }
}
}
