#include<bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=1; ; i++)
    {
        int n,m,c;
        cin>>n>>m>>c;
        if(n==0)
            break;
        int a[n];
        for (int j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        bool state[n];
        int maximum=0;
        int curstate=0;
        for (int k=1;k<=n;k++)
            state[k]=false;
        for (int p=1;p<=m;p++)
        {
            int toggle;
            cin>>toggle;
            if(state[toggle]==false)
            {
                state[toggle]=true;
                curstate+=a[toggle];
                if(curstate>maximum)
                    maximum=curstate;
         //            printf("Max is %d\n",maximum);
                     //printf("cur is %d\n",curstate);
            }
            else if(state[toggle]==true)
            {
                state[toggle]=false;
                curstate-=a[toggle];
                       //printf("After decreasing current power %d\n", curstate);
             //   if(curstate>maximum)
               //     maximum=curstate;
            }

        }
       // printf("Maximi is %d\n",maximum);
        printf("Sequence %d\n",i);
        if(maximum>c)
            printf("Fuse was blown.\n\n");
        else if(c>=maximum)
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",maximum);
        }

    }

}
