#include<bits/stdc++.h>
using namespace std;
#define maxi 40
int n;
string s;
queue<char> q;
bool taken[maxi];
vector<char> res;
void rec(int start)
{
    if(res.size()==n)
    {
        for (int i=0;i<res.size();i++)
        {
            cout<<res[i];
        }
            cout<<endl;
            return;

    }
    for (int i=start;i<s.length();i++)
    {
      if(taken[i]==false)
      {
          taken[i]=true;
          res.push_back(s[i]);
          rec(i+1);
          taken[i]=false;
          res.pop_back();


      }
      while(s[i]==s[i+1])
        i++;
    }


}


int main()
{



    while(cin>>s>>n)
    {
        memset(taken,false,sizeof(false));
        //res.clear();
        sort(s.begin(),s.end());
        rec(0);




    }
}
