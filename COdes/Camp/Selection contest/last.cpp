#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
             int gonona=0;
       // cout<<n;
   //     printf("n");
       // int a[91];


       map<int,int> mp;
        for (int j=1;j<=90;j++)
        {


          //  printf("\ndhuksi\n");
            //a[j]=j;
            int fm=j;
            int fin=fm;
            //cout<<"Current fm is"<<fm<<endl;
           // cout<<fm<<endl;

            int fm2=0;
            //cout<<fm<<endl;
            //printf("fe nisi\n");
            while(fm!=0)
            {
           //   printf("problem\n");
                fm2=fm2+(fm%10);
            //    cout<<fm2<<endl;

                fm=fm/10;



            }

             mp[fin]=fm2;
           //  cout<<"Current fm is"<<fm<<endl;
        // cout<<"Current fm2 is"<<fm2<<endl;
          //  cout<<fm2<<endl;
           // cout<<fm<<endl;
            int m=(n-(fin+fm2));
            fm=m;
            int fm3=0;

            while(fm!=0)
            {
                 fm3=fm3+(fm%10);
                fm/=10;
            }
            mp[m]=fm3;
            //if(m+fin+fm2==n);
            /*if(fin==34 )
            {
                 cout<<n<<" "<<m<<" "<<fin<<" "<<fm2<<endl;
                printf("Finally\n");
                cout<<mp[fin]<<endl;
                cout<<mp[m]<<endl;


            }
            */


            if(m>0 && mp[fin]==fm2 &&mp[m]==fin  )
            {
               //  printf("Finally\n");


//           cout<<n<<" "<<m<<" "<<fin<<" "<<fm2<<endl;

            gonona++;
            }

//cout<<"j "<<j<<endl;

        }
        cout<<gonona<<endl;
    }
}

