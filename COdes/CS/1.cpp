#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    string s1;
    cin>>s1;
    for (int i=0;i<s1.length();i++)
    {
        s.insert(s1[i]);
    }
if(s.size()==s1.length())
    printf("1\n");
else
    printf("0\n");
}
