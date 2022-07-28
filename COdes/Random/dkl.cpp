#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[206];
    int test,j,k,n,i;
    long p;
    long long sum;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
        scanf("%s%ld",a,&p);
        if(p<0) p=-p;
        n=strlen(a);
        sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='-') continue;
            sum=sum+(a[i]-'0');

            if(sum>=p)
                sum=sum%p;
            if(i!=n-1&&sum<p)
                sum=sum* 10;
            else if(i==n-1&&sum>p)
                sum=sum%p;
    }
    if(sum==0)
        printf("Case %d: divisiblen",j);
    else
        printf("Case %d: not divisiblen",j);
    }
    return 0;
}
