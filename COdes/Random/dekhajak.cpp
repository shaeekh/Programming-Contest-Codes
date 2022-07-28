#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int c=0;
    for (int i=0;i<l;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9' )
        {
            c++;

        }
    }
    cout<<c<<endl;
}
