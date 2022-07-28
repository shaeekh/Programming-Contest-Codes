#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int ja;
        cin>>n>>ja;
        int a[n];
        vector<int> k;
        vector<int> d;
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]>ja)
                k.push_back(i);
            else
                d.push_back(i);
        }
        cout<<"Kache Eso"<<endl;
        if(k.size()==0)
            cout<<endl;
        else
        {



        for(int i=0;i<k.size();i++)
        {
            if(i==k.size()-1)
                cout<<k[i]<<endl;
            else
                cout<<k[i]<<" ";
        }

        }
            cout<<"Dure Giya Mor"<<endl;
        if(d.size()==0)
            cout<<endl;
        else
        {



        for(int i=0;i<d.size();i++)
        {
            if(i==d.size()-1)
                cout<<d[i]<<endl;
            else
                cout<<d[i]<<" ";
        }
        }
    }
}
