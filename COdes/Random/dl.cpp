#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> a;
    for (int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        a.clear();


        while(n--)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }
        while(m--)
        {
            //cout<<m<<endl;
            char d;
            int cur;
            cin>>d;
           // d=getchar();
//            getchar();
            if(d=='S')
            {
              //  printf("s er moddhe\n");
                cin>>cur;
                for (int p=0;p<n;p++)
                    {
                        cout<<p<<endl;
                        a[p]=a[p]+cur;
                //        printf("jog hoise\n");
                       //cout<<a[i]<<endl;

                    }
                    //printf("vector elements\n");
                    //for (int p=0;p<n;p++)
                    //{
                      //  cout<<a[p]<<endl;

//                    }




            }
            else if(d=='M')
            {
                cin>>cur;
                for (int p=0;p<n;p++)
                    {
                        a[p]=a[p]*cur;
                   //     cout<<a[p]<<endl;
                    }


            }
             else     if(d=='D')
            {
                cin>>cur;
                for (int p=0;p<n;p++)
                    {
                        a[p]=a[p]/cur;
                     //   cout<<a[p]<<endl;
                    }


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
            //    cout<<a[l]<<" "<<a[z]<<endl;
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


