#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool a[5005];
    int n;
    string s;
    cin>>n>>s;
   if(n<26)
    {
      cout<<"NO"<<endl;
        return 0;
    }
    set<char> r;
    for (int i=0;i<n;i++)
    {
        s[i]=toupper(s[i]);
        r.insert(s[i]);

        //cout<<d<<" "<<d-65<<endl;
    }
    //cout<<s.size()<<endl;
   if(r.size()==26)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
