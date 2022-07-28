#include <stdio.h>
int main()
{

    long long int n;
    scanf("%l64d",&n);
    int i,count1=0;
    for (i=1;n!=0;i++)
    {
        if (n%10==4 || n%10==7)
        {
            count1++;
        }
        n/=10;
    }
    if (count1==4 || count1==7)
    {
        printf("YES\n");

    }
    else
        printf("NO\n");
    return 0;
}
