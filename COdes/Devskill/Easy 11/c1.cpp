#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int x;
    for (int i=1;i<=t;i++)
    {
        scanf("%d",&x);
       int n=x;
       int p=pow(2,n);
       while(p>=9)
       {
           p=p/10;
       }
       if(x%2==0)
        printf("+%d\n",p);
       else
        printf("-%d\n",p);

    }
}
