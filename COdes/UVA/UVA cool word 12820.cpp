#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int dd=0;

    while(cin>>t)
    {
           int cou=0;


    for (int j=1;j<=t;j++)

     {
         set<char> s1;
     string s;
     cin>>s;
    int v[65];
     memset(v,0,sizeof(v));
//     printf("hu\n");


     for (int i=0;i<s.length();i++)
     {
     //    printf("hu hu\n");
         int a=s[i]-'a';
         v[a]++;
         //s1.insert(a);

     }
     int ccc=0;
     for (int i=0;i<30;i++)
     {
         if(v[i]!=0)
         {
             s1.insert(v[i]);
             ccc++;
         }
     }
     if(ccc==s1.size() && s1.size()!=1)
     {
         cou++;

     }
    }
     printf("Case %d: %d\n",++dd,cou);
    }
    }

