#include<bits/stdc++.h>
using namespace std;
int bhanga_jog(int n)
{
    int sum=0;
    while(n/10!=0)
    {
    sum=sum+(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n-1;i++)
    {
        int get=bhanga_jog(i);
        if(get+i==i)
            printf("Yes this is the number %d\n",i);

    }
    return 0;
}
