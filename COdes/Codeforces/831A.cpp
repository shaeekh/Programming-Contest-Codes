#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=1;
    int a[n];
    int count1=0;
    for (int i=1;i<=n;i++)
        cin>>a[i];
        int mid;
        if(n%2==1)
            mid=(n/2)+1;
        else
            mid=(n/2);

    for (int j=2;j<=mid;j++)
       {
          // if(a[j]==a[j+1])

           if(a[j]<a[j-1])
           {
               f=0;
               break;
           }
           if(f==0)
           {
               printf("NO\n");
               return 0;
           }
       }
       for (int i=mid+1;i<=n;i++)
        {
            if(a[i]==a[i-1])
                count1++;
            if(a[i]>a[i-1])

             {
                 //printf(" %d and %d\n",i,a[i]);
                 //printf("%d and %d \n",i-1,a[i-1]);
                 f=0;
             //break;
             }


    }
    //printf("n/2 i %d\n",n/2);
    int abi=n-((mid+1))+1;
   // cout<<abi<<endl;
    //cout<<count1<<endl;

    if(f==0 && count1!=abi)
    {
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
}
