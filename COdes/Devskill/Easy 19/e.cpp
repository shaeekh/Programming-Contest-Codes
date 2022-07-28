#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int n;
        scanf("%llu",&n);
        n=n+1;
       // cout<<"n is "<<n<<endl;
        if(n==1)
            cout<<"1"<<endl;
        else if(n==2)
            cout<<"2"<<endl;
        else
        {


        if(n%3==1)
            printf("1\n");
         else   if(n%3==2)
            printf("2\n");
           else if(n%3==0)
            printf("4\n");
    }
    }

}
