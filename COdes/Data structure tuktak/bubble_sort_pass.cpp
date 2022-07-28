#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //printf("%d and %d\n",a[0],a[1]);
    //int k=n;
   //int co=0;
   int swapped=0;

for (int k=0;k<n-1;k++)
{


    for (int i=0;i<n-k-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
            swapped=i;
        }

   // printf("for pass %d \n",i);

    }
         k=swapped;
          for (int po=0;po<n;po++)
    {
        printf("%d ",a[po]);
    }
    if(k!=n-1)
    cout<<endl;

  // printf("showing %dth passes \n",co+1);

}
 //for (int i=0;i<n;i++)
   // {
     //   cout<<a[i]<<endl;
    //}
}

