#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[20];
    scanf("%s",s1);
    int l=strlen(s1);
    int count=0;
    if (l==1)
        cout<<"YES"<<endl;
    else
    {
        for (int i=0;i<l/2;i++)
        {
            if (s1[i]!=s1[l-i-1])
                count++;
                //cout<<s1[i]<<endl;
                //cout<<s1[l-i]<<endl;
        }
         if (count==0 && l%2==1)
           cout<<"YES"<<endl;
        if (count==1)
            cout<<"YES"<<endl;
        else if((count==0 && l%2==0) || (count>1))
            cout<<"NO"<<endl;
            //cout<<count<<endl;

               //cout<<count<<endl;
               //cout<<count%2<<endl;
    }
}
