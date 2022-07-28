#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   // printf("\n\n");
   getchar();
   getchar();

    string s;
   // int a;

    for (int i=1;i<=t;i++)
    {
        map<string,int> mp;
        int j=0;
        while(getline(cin,s) && !s.empty())
        {

            //cin>>a;
            mp[s]=mp[s]+1;


            j++;

    }
    map <string,int> :: iterator it;
    for ( it=mp.begin(); it!=mp.end() ;it++)
    {
        double val=(double)(it->second)*100/j*1;
         cout << it->first << " ";
            printf("%.4lf\n", val);
    }
 if(i<t)
//        cout<<t<<endl;
    puts("");
}
}

