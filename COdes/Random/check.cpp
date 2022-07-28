#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> m;
    string s;
    cin>>s;
    cout<<"s "<<s<<endl;

    map<char,int>  :: iterator it;
    //it=m.begin();
    int i=0;
    for(it=m.begin();it!=m.end();it++)
    {
        printf("dd");
        m[s[i]]++;
        cout<<it->first<<endl;
        i++;
        printf("%d \n",i);

    }
}
