#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    vector<int> a;
    for (int i=1;i<=t;i++)
    {
        int n,m;
       scanf("%d %d",&n,&m);
      // cout<<n<<"  "<<m<<endl;

        a.clear();


        for (int ka=0;ka<n;ka++)
        {
            int p;
            scanf("%d",&p);
        //    cout<<"p "<<p<<endl;
            a.push_back(p);
        }
      for (int ppp=0;ppp<m;ppp++)
        {
            //cout<<m<<endl;
            char d;
            int cur;
            cin>>d;

            getchar();
          //  cout<<"d "<<d<<endl;
           // d=getchar();
//    getchar();
            if(d=='S')
            {
              //  printf("s er moddhe\n");
               scanf("%d",&cur);
               //printf()
                for (int p=0;p<n;p++)
                    {
                        //cout<<p<<endl;
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
                //cin>>cur;
                scanf("%d",&cur);

                for (int p=0;p<n;p++)
                    {
                        a[p]=a[p]*cur;
                   //     cout<<a[p]<<endl;
                    }


            }
             else     if(d=='D')
            {
                //cin>>cur;
             scanf("%d",&cur);
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
                //cin>>l>>z;
             scanf("%d %d",&l,&z);
                swap(a[l],a[z]);
            //    cout<<a[l]<<" "<<a[z]<<endl;
            }

        }
        printf("Case %d:\n",i);
        vector <int>:: iterator it;
        it=a.begin();
            while(it!=a.end())
            {
                if(it!=a.end()-1)
                cout<<*it<<" ";
                else
                cout<<*it;
                it++;
            }
        cout<<endl;
}
}
