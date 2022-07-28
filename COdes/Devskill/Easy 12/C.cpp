#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for (int i=1;i<=t;i++)
    {
        int r;
        int sum=0;
        string s;
        getline(cin,s);
        for (int p=0;p<s.size();p++)
        {
            if(s[p]>='0' && s[p]<='9')
            sum=sum+s[p];

        }
        cout<<sum<<endl;
    }
}
