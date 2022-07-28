#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    map <string,int> mp;
    string s;


    while(cin>>n && n)
    {

         mp.clear();
      //  string s;
       // string color;
       // int c=0;

        //if(n==0)
          //break;

      while(n--)
        {
            cin>>s;
            mp[s]++;
        }
            map <string,int> :: iterator it;
            int high=0;
            string color;

            for (it=mp.begin();it!=mp.end();it++)
            {
            // high=max(high,mp[*it]);
          //  high=max(high,it->second);
          if(it->second>high)
          {
              high=it->second;
              color=it->first;
          }
             //color=(*it).first;
           //cout<<it->second<<endl;
            //cout<<it->first<<endl;
             //cout<<(*it).second<<endl;
            }


        cout<<color<<endl;
    }
    return 0;

    }

