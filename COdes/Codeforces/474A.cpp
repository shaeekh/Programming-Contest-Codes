#include<bits/stdc++.h>
using namespace std;
string s1=("qwertyuiopasdfghjkl;zxcvbnm,./");
int main()
{
    char c;
    string S;
    cin>>c;
    cin>>S;
    int k;
    //char s4[130];

        for (int i=0;i<S.length();i++)
        {
            if(c=='R')
            {


            k=s1.find(S[i]);
            cout<<s1[k-1];

        }
        else
        {
            k=s1.find(S[i]);
            cout<<s1[k+1];
        }

    }
    cout<<endl;

}
