
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


long long nCr(long long n,long long m)
{
long long res=1,i;
if(n-m<m)
m=n-m;
for(i=1;i<=m;i++,n--){
res=res*n;
res=res/i;
//cout<<"res is "<<res<<endl;
}
return res;
}

int main(){
long long n,r;
while(scanf("%lld%lld",&n,&r)==2)
{
    if(n==0&&r==0)
    break;
   printf("%lld\n",nCr(n,r));
}


return 0;
}
