#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
//int l=s.length();
    int f=0;
    for (int i=0;i<(s.length());i++)
    {
        if (s[i]!='1' && s[i]!='4')
        {
            cout<<"NO"<<endl;
            f=2;
           // cout<<f;
            break;

        }
        else if (s[0]=='4')
        {
            cout<<"NO"<<endl;
            f=3;
            //cout<<f;
            break;
        }


        else if (s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
        {cout<<"NO"<<endl;
        f=4;
        //cout<<f;
        break;
        }
    }
    if (f==0)
        cout<<"YES"<<endl;

}
