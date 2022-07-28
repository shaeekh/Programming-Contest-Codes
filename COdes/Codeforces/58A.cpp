#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word="hello";
    string test;
    cin>>test;
    int count=0;
    int a=0;
    for (int i=0;i<test.length();i++)
    {
        if (test[i]==word[a])
        {
            a++;
            count++;
        }
    }
    if (count==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
