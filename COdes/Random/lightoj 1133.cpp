#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a;

        while(n--)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }
        while(m--)
        {
            char d;
            int cur;
            cin>>d;
            if(d=='S')
            {
                cin>>cur;
                for (int p=0;p<n;p++)
                    a[p]=a[p]+cur;


            }
            else     if(d=='M')
            {
                cin>>cur;
                for (int p=0;p<n;p++)
                    a[p]=a[p]*cur;


            }
             else     if(d=='D')
            {
                cin>>cur;
                for (int p=0;p<n;p++)
                    a[p]=a[p]/cur;


            }
            else if (d=='R')
            {
                reverse(a.begin(),a.end());
            }
            else if(d=='P')
            {
                int l,z;
                cin>>l>>z;
                swap(a[l],a[z]);
                //cout<<a[1]<<endl;
            }

        }
        printf("Case %d:\n",i);
        vector <int>:: iterator it;
        it=a.begin();
            while(it!=a.end())
            {
                cout<<*it<<" ";
                it++;
            }
        cout<<endl;
}
}

