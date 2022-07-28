#include<bits/stdc++.h>
using namespace std;
long long int f[21];


void fact( )
{
f[0]=1;
f[1]=1;
for (int i=2;i<=20;i++)
    {
        //if(f[i]!=-1)
        // return f[i];
         if(f[i]==0)
        {
            f[i]=i*f[i-1];
           //  cout<<f[i]<<endl;

        }
        //printf("elements\n");
        //cout<<i<<"  "<<f[i]<<endl;
    }
    //return f[n];


}
int main()
{
    int t;
    scanf("%d",&t);
     fact();
    for (int i=1;i<=t;i++)
    {


    //    fact();
    long long     int n;
        scanf("%lld",&n);
        //long long int  a[20];
//printf("")


//        for (int p=0;p<20;p++)
  //          {
    //            a[p]=f[p];
  //              cout<<p<<"  "<<a[p]<<endl;

      //      }
    long long  int sum=0;
        //    stack<int> s;
        long long int da[400];
        long long int d=0;

        for (int c=19;c>=0;c--)
        {
            if(sum==n)
                break;

            //sum+=c[i];

           else if(sum<n)
            {
                sum+=f[c];
                if(sum<=n)
                {
                    da[d++]=c;
 //                   cout<<da[d]<<endl;
                }
                else
                    sum=sum-f[c];


            }


        }
        //cout<<"d"<<"  "<<d<<endl;
//        cout<<sum<<endl;
   if(sum==n)
        {


        printf("Case %d: ",i);
        for (int c=d-1;c>0;c--)
        {
            cout<<da[c]<<"!+";
        }
        cout<<da[0]<<"!"<<endl;
        }
        else
            printf("Case %d: impossible\n",i);


    }



}



