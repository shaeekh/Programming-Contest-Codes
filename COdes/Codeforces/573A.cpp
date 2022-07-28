#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    //for (long long int i=0;i<n;i++)
      //  cin>>a[i];

  //  sort(a,a+n);
   // long long int count=0;
   //cin>>a[0];
    for (int  i=0;i<n;i++)
    {
        cin>>a[i];
        while(a[i]%2==0)
        {
            a[i]/=2;
            //printf("2 die jaoar pore %d\n", a[i]);
        }
        while(a[i]%3==0)
        {
            a[i]/=3;
            //printf("3 die jaoar pore %d\n", a[i]);

    }
    }
    for (int i=1;i<n;i++)
   {

    if(a[i]!=a[0])
    {
        //printf("%d %d\n", a[i],a[i-1]);
        printf("No\n");
        return 0;
    }
    }

   // printf("count is %d\n",count);
    //for (long long int i=1;i<n;i++)
    //{
      //  if(a[i]!=a[0])
        //    printf("No\n");
          //  return 0;
    //}
    printf("Yes\n");
    //return 0;
}
