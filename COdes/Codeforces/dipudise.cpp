#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,p,res,c=0,d=0,resp,resppi,sum1=0,sum2=0;
    double t;
    cin>>n;
    p=n;
    while(1){
        n/=10;
        c++;
        if(n==0){
            break;
        }
    }
    n=p;
    n+=1;
    while(1){
        n/=10;
        d++;
        if(n==0){
            break;
        }
    }
    if(d==c+1){
        res=p;
    }
    else{
        t=p/(pow(10,c-1));
        t=t-(int)t;
        t=t*(pow(10,c-1));
        resp = p-(t+1);
        sum1=0;
        sum2=0;
        n=p;
        resppi= resp;
        while(1){
          sum1+=resp%10;
          resp/=10;
          sum2+=n%10;
          n/=10;
          if(n==0){
            break;
          }
        }
        if(sum1==sum2){
            res=p;
        }
        else{
            res=resppi;
        }
    }
    cout<<res<<endl;
    return 0;
}

