#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    string s;
    //cin>>s;
    getline(cin,s);
    set<char> f;
    //cout++;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]>=97 && s[i]<=122)
          f.insert(s[i]) ;
    }
    cout<<f.size()<<endl;

    }


