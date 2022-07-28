#include<bits/stdc++.h>
using namespace std;
bool prime[48531];
    vector<int>v;
 void sieve (int n)
 {


   memset(prime,true,sizeof(prime));
  // cout<<"3 er "<<prime[3]<<endl;

        prime[1]=false;
        prime[0]=false;
        prime[2]=true;
        for (int i=4;i<=n;i+=2)
        {
            prime[i]=false;
        }
     for (int i=3;i*i<=n;i+=2)
     {
        // if(i==3)
          //  cout<<prime[i]<<endl;
         if(prime[i])
         {

             for (int j=i*i;j<=n;j+=2*i)
             {
                 prime[j]=false;
             }
         }
     }
    // cout<<"3 er "<<prime[3]<<endl;
     v.push_back(2);
     for (int p=3;p<=n;p+=2)
    {
        if (prime[p])
            v.push_back(p);
    }
      //for (int p=3;p<=n;p+=2)
    //{
      //  if (prime[p])
     //       cout<<"prime is "<<p<<endl;
    //}



 }
int main()
{
    int n,k;
    cin>>n>>k;
    sieve(n);
    int c=0;
    for (int i=0;i<v.size();i++)
    {
     if(prime[v[i]+v[i+1]+1] && v[i]+v[i+1]+1<=n)

     {
         //cout<<v[i]+v[i+1]+1<<endl;
         c++;
     if(c>=k)
        break;
    }
    }
    if(c>=k)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
