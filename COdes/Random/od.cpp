#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000];
    a[0]=0;
    a[1]=1;
    for (int i=1;i<=100000/2;i++)
    {
       // if(i%2==0)
       a[2*i]=a[i];
       a[2*i+1]=a[i]+a[i+1];


    }
  //  for (int i=0;i<10;i++)
    //   cout<<a[i]<<endl;

     int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
           int da=0;
            //int pos;
        for (int j=0;j<=n;j++)
        {
            da=max(da,a[j]);
            //pos=j;

        }
        printf("%d\n",da);

    }
}
