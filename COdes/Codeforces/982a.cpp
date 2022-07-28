#include<bits/stdc++.h>
using namespace std;
map<string,string> mp;
map<string,int> mp2;

void init()
{
    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";
}
int main()
{
    string s1[]={"purple","green","blue","orange","red","yellow"};
    init();

    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"6"<<endl;
        for (int i=0;i<6;i++)
        {
            cout<<mp[s1[i]]<<endl;
        }

    }
    else
    {


    string s[n];
    for (int i=0;i<n;i++)
    {

        cin>>s[i];
        mp2[s[i]]++;
        //cout<<s[i]<<" "<<mp2[s[i]]<<endl;
    }

    if(n<6)
     {
        // cout<<"if er bhitore "<<endl;
         int get=6-n;
         cout<<get<<endl;
        for (int i=0;i<6;i++)
       {
        if(mp2[s1[i]]==0)
        {
            cout<<mp[s1[i]]<<endl;
        }
       }
     }
    else if(n==6)
     {
         int co=0;
          for (int i=0;i<6;i++)
       {
        if(mp2[s1[i]]==0)
        {
            co++;

        }

     }
     if(co>0)
     {
         cout<<co<<endl;
          for (int i=0;i<n;i++)
       {
        if(mp2[s1[i]]==0)
        {
            cout<<mp[s1[i]]<<endl;
        }
       }

     }
     else
        cout<<co<<endl;

     }

}      //  printf("%d\n",6-n);
    //els

}

