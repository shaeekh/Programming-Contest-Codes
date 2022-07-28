#include<bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
int mod(int n)
{
    int temp=fact(n);
   // cout<<temp<<endl;
    int mod;
    for (; ;)
    {
        mod=temp%10;
        if (mod==0)
            {
                temp=temp/10;
     //           cout<<n<<endl;
                continue;
            }
            else
            {


        return mod;
    }
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {//cout<<fact(n)<<endl;
   printf("%d -> %d\n",n,mod(n));
}
}
