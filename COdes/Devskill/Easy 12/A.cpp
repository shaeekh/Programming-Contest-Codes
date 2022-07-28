#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for (int i=1;i<=t;i++)
    {
        string s;
        getline(cin,s);
        for (int j=0;j<s.size();j++)
        {
            if(s[j]>=65 && s[j]<=90)
                s[j]=tolower(s[j]);

        else
            s[j]=toupper(s[j]);
        }
        cout<<s<<endl;
    }

}
