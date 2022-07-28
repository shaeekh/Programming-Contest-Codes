#include<bits/stdc++.h>
using  namespace std;
int main()
{
    map<string,int> m;
    m["x"]=11;
    m["fd"]=34;
    map<string,int> :: iterator it;
    it=m.find("x");
  if(it!=m.end())

    {
        cout<<"x "<<it->second<<endl;
    }


}
