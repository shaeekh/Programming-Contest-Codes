#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[m];
    for (int i=0;i<n;i++)
    {
        cin>>s[i];

    }
    bool valid=true;
    for (int i=0;i<n;i++ )
    {
        if(valid==false)
            break;
        int co=0;
        for (int j=0;j<m;j++)
        {
            if (i==0 && j==0)
            {
                if(s[i][j]>=1 && s[i][j]<=8)
                {
                    if (s[i][j+1]=='*') //dane
                    {co++;
                    int cli=s[i][j]-'0'
                    if(co>cli)
                    {
                        valid=false;
                        break;
                    }
                    }
                    if (s[i+1][j]=='*') //niche
                    {
                        co++;
                    int cli=s[i][j]-'0';
                    if(co>cli)
                    {
                        valid=false;
                        break;
                    }
                    }
                     if (s[i+1][j+1]=='*') //niche
                    {co++;
                    int cli=s[i][j]-'0';
                    if(co>cli)
                    {
                        valid=false;
                        break;
                    }
                    }
                    if(co<cli)
                    {
                        valid=false;
                        break;
                    }

                }
             else   if(s[i][j]=='.')
                {
                    if (s[i][j+1]=='*') //dane
                    {
                        valid=false;
                        break;
                    }

                    if (s[i+1][j]=='*') //niche
                    {

                        valid=false;
                        break;
                    }

                     if (s[i+1][j+1]=='*') //niche
                    {  valid=false;
                        break;
                    }

                }
            }
          else   if (i==n-1 && j==0)
            {
                if(s[i][j]>=1 && s[i][j]<=8)
                {
                    if (s[i][j+1]=='*') //dane
                    {co++;
                    int cli=s[i][j]-'0'
                    if(co>cli)
                    {
                        valid=false;
                        break;
                    }
                    }
                    if (s[i-1][j]=='*') //niche
                    {
                        co++;
                    int cli=s[i][j]-'0';
                    if(co>cli)
                    {
                        valid=false;
                        break;
                    }
                    }
                     if (s[i-1][j+1]=='*') //niche
                    {co++;
                    int cli=s[i][j]-'0';
                    if(co>cli)
                    {
                        valid=false;
                        break;
                    }
                    }
                    if(co<cli)
                    {
                        valid=false;
                        break;
                    }

                }
             else   if(s[i][j]=='.')
                {
                    if (s[i][j+1]=='*') //dane
                    {
                        valid=false;
                        break;
                    }

                    if (s[i+1][j]=='*') //niche
                    {

                        valid=false;
                        break;
                    }

                     if (s[i+1][j+1]=='*') //niche
                    {  valid=false;
                        break;
                    }

                }


        }
    }
