#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {
        int op;
        scanf("%d",&op);
        printf("Case %d:\n",++co);
        int sum=0;
        for (int i=1;i<=op;i++)
        {
            string s;
            cin>>s;
            if(s[0]=='d')
            {
                int a;
                scanf("%d",&a);
                sum=sum+a;

            }
            else if(s[0]=='r')
            {
                printf("%d\n",sum);
            }
        }

    }
}
