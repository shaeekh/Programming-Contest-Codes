#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    int count=0;
    if (l1!=l2)
        cout<<"NO"<<endl;
else
    {
        for(int i=0;i<l1;i++)

        {
            if(s1[i]!=s2[i])
                count++;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

    if (s1==s2 && count==2)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
     //   cout<<count<<endl;
}
}



