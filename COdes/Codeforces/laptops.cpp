#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<int,int> p[n];
    for (int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
     for (int i=0;i<n;i++)
     {
         if((p[i].first<p[i+1].first) && (p[i].second>p[i+1].second))
            {cout<<"Happy Alex"<<endl;
         return 0;

     }
     }
     cout<<"Poor Alex"<<endl;

}
