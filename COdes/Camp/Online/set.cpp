#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {

        set <int> a;
       // set <int> b;
        for (int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        for (int j=1;j<=m;j++)
        {
            int y;
            cin>>y;
            a.insert(y);
        }
     //  for (int i=1;i<=a.size();i++ )
       // {
         //   if( i==a.size())
           //    printf("%d\n",a[i]);
             //  else
              //  printf("%d ",a[i]);
       // }
       set<int> ::iterator it;
        it=a.begin();
        for (int i=1;i<=a.size();i++)

        {
           if(i!=a.size())
            cout<<*it<<" ";
            else
                cout<<*it<<endl;
            it++;
        }
       // cout<<endl;
        a.clear();

    }
}
