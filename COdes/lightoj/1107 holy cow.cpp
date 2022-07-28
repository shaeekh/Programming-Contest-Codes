#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int m;
        scanf("%d",&m);
        printf("Case %d:\n",++co);
        for (int i=1;i<=m;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            if((x>=a && x<=c) && (y>=b && y<=d))
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }

    }
}
