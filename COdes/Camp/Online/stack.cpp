#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1;
    //getline(cin,s1);
    for (int i=1;i<=t;i++)
    {

        stack<char> s;
        getline (cin,s1);
        for (int j=0;j<s1.size();j++)
        {
            if(!s.empty() && s1[j]==')' && s.top()=='(')
                s.pop();
            else if(!s.empty() && s1[j]==']' && s.top()=='[')
                s.pop();
            else
                s.push(s1[j]);
        }
        if(s.empty())
            printf("Yes\n");
        else
            printf("No\n");
    }
}
