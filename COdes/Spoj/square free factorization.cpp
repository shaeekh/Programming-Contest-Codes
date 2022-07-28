#include<bits/stdc++.h>
using namespace std;
int primefact(long long int n)
{
    int count=0;
    if (n%2==0)
    {
        while(n%2==0)
        {
            n=n/2;
            //printf(" 2 er jonno %d\n",count);
            count++;
        //    printf(" 2 er jonno %d\n",count);
        }
    }
     if (n%3==0)
    {
        while(n%3==0)
        {
            n=n/3;
            count++;
            //printf(" 3 er jonno %d\n",count);
        }
    }

    else{
            for (int i=5;i<=sqrt(n);i+=6)
        {
            if (n%i==0)
    {
        while(n%i==0)
        {
            n=n/i;
            count++;
          //  printf(" %d er jonno %d\n",i,count);
        }
        continue;
    }
        }

    else if (n%(i+2)==0)
    {
        while(n%(i+2)==0)
        {
            n=n/(i+2);
            count++;
        //     printf(" %d er jonno %d\n",i+2,count);
        }
        continue;
    }
        }


    //if (n>2)
      //  count++;

return count;
}

int main()
{
    int t;
    scanf("%d",&t);
    long long int n;
    //scanf("%lld",&n)
    for (int i=1;i<=t;i++)
    {
        scanf("%lld",&n);



    //cin>>n;
    int a=primefact(n);
if(a==0)
     cout<<"1"<<endl;
   else
    cout<<a<<endl;
}
}

