#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
  char s1[200];
  char s2[200];
    for (int i=1;i<=t;i++)
    {
        getline(s1);
        getline(s2);
           int l1=sizeof(s1)/sizeof(s1[0]);
    int l2=sizeof(s2)/sizeof(s2[0]);



    int flag=0;
    if(l1/2!=l2/2)
        cout<<"dissimilar"<<endl;
    else
    {
         sort(s1,s1+l1);
    sort(s2,s2+l2);
        for (int i=0;i<l1/2;i++)
        {
            if (s1[i]!=s2[i])
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;
    }
}
}
