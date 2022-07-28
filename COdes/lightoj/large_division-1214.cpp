#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

for (int i=1;i<=t;i++)

 {
    long long int sum=0;
    string a;
    long long int p;
    cin>>a>>p;
    if(p<0)
        p=-p;
    int n=a.size();

    for (int j=0;j<n;j++)
    {
          if(a[j]=='-')
        continue;
        sum=sum+(a[j]-'0');
        if(sum>=p)

            {
       //         printf("prothom loop e sum %d\n",sum);
                sum=sum%p;
         //       printf("prothom loop e sum %d\n",sum);
            }
        if(sum<p && j!=n-1)
            {
           //     printf("ditio loop e sum %d\n",sum);
                sum=sum*10;
             //   printf("ditio loop e sum %d\n",sum);
            }
        else if(j==n-1 && sum>p)
            {
                sum=sum%p;
               // printf("3rd loop e sum %d\n",sum);
            }


    }
    if(sum==0)
        printf("Case %d: divisible\n",i);
    else
        printf("Case %d: not divisible\n",i);
    //if(d<0)
     //d=-d;

  //cout<<d<<endl;

   // cin>>d;
    //d=-d;
    //cout<<d<<endl;

    }
}


