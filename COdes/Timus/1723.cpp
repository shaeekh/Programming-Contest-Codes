#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();

    map<char,int> m;
    //cout<<"Primary "<<m[s[0]]<<endl;
    map<char,int> :: iterator it;
   // it=m.begin();
    int maxe=0;
    char fin;
    for (int i=0;it!=m.end(),i<n;i++)
    {
        char a=s[i];
        //a=
         //cout<<"ma for "<<s[i]<<" "<<m[a]<<" "<<m[a]++<<endl;
        m[a]++;
       //// cout<<"barano "<<m[a]<<endl;

        if(maxe<m[a])
            {
                maxe=m[a];
               it=m.find(s[i]);

               fin=it->first;

             //  cout<<s[i]<<endl;
           //    cout<<"fin "<<it->first<<endl;

            }
     //       it++;

}
cout<<fin<<endl;
//cout<<maxe<<endl;
}
