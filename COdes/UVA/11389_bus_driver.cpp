#include<bits/stdc++.h>
using namespace std;
bool comp(int x,int y)
{
    return x>y;
}
int main()
{
    int n,d,r;
  //  freopen("input.txt","r",stdin);
    while(cin>>n>>d>>r)
    {
        if(n==0 )
            break;
        int a[n];
        int b[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,comp);
       // for(int i=0;i<n;i++)
        //{
          //  cout<<b[i]<<endl;
        //}
        int sum=0;
        for(int i=0;i<n;i++)


        {
            int e=a[i]+b[i];
            if(e>d)
            {
                sum=sum+((e-d)*r);

            }
    //        printf("initial sum %d\n",sum-(e-d)*r) ;
        }

        cout<<sum<<endl;
    //freopen("output.txt","w",stdout);
    //fclose(stdout);
    }
    //freopen("output.txt","w",stdout);

    return 0;
}
