#include<bits/stdc++.h>
using namespace std;

int fibo(int num)
{
    if (num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else if(num==2)
        return 2;

    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
int main()
{
     int t;
     cin>>t;
     for (int i=1;i<=t;i++)
     {
         int n;
         cin>>n;

         printf("Cell %d: %d\n",i,fibo(n));
     }

}
