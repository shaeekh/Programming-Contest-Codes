#include <iostream>
#include<string>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int n;
    string s1;
    cin>>n;
    cin>>s1;
    string s2,s;
    int i;
     int g1=1,g2=0;
    for (i=2;i<=n;i++)
    {


        cin>>s;

        if (s1==s)
        {
            g1++;
        }
        else
        {
            g2++;
            s2=s;
        }


    }
    if (g1>g2)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;
}
