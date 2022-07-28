#include<bits/stdc++.h>
using namespace std;
int bitwise_or (int a,int b)
{
    return a|b;
}
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    int flag=0;
    unsigned long long result;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n==1)
        {
            //printf("1\n");
            flag=1;
        }
       else if(n==0)
        {
            //printf("0\n");
            flag=2;
        }
        else
        {



    for (int j=0;j<n-1; )

    {
       result=bitwise_or(j,j+1);
       //printf("%d and %d er result %llu\n", j,j+1,result);
       j=j+1;
    }
        }
 if (flag==0)
   {
       printf("%llu\n", result);
      // cout<<flag;
   }
 else if(flag==1)
 printf("1\n");
 else if (flag==2)
    printf("0\n");

}
}

