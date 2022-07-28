#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    //bool r;
    while(t--)
    {
        bool r;
        r=true;

        int n;
        scanf("%d",&n);
        int a[n];
        for (int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }
        sort(a,a+n);
        for (int i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])%2!=0)
            {
                r=false;
                break;
            }


        }
        if(!r)
            printf("no\n");
        else
            printf("yes\n");


}
return 0;
}

