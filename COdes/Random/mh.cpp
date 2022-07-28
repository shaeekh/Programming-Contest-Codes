#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int sum=n;
    if(n==1){
        printf("1\n");
        return 0;
    }
    while(n!=0)
    {
        sum+=(n/k);
        printf("sum %d \n",sum);
        n=(n/k)+(n%k);
        printf("n %d\n",n);
    }
    printf("final %d\n",sum);

}


