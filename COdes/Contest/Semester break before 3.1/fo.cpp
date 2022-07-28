#include<bits/stdc++.h>
using namespace std;

bool ispalli(string s)
{
    int n=s.length()-1;
    for (int i=0;i<n;i++,n--)
    {
        if(s[i]!=s[n])
           {
             //  cout<<i<<" "<<j<<endl;

            return false;
           }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool ge=false;
        string s;
        cin>>s;
        int l=s.length();
        for (int i=0;i<l;i++)
        {
            if(s[i]=='A'|| s[i]=='H' || s[i]=='I' ||s[i]=='M' || s[i]=='O' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W'|| s[i]=='X'
               || s[i]=='Y')
            {
                ge=true;

            }
            else
            {
                ge=false;
            }
            if(!ge)
            {
                printf("no\n");
                break;


            }
        }
//            else
  //          {
                if(ispalli(s) && ge)
                    printf("yes\n");
                else
                {
                    if(ge)
                    printf("no\n");
                }

       //     }
        }

    return 0;
}
