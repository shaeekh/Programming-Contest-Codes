#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int c;int reserve=0;
    int sum=0;
    int day=0;
    for (int i=1;i<=n;i++)
    {
        cin>>c;
        if(c+reserve<8 && reserve!=0)
        {
            c=c+reserve;
            reserve=reserve-reserve;
        }
        else if(c<8 && reserve!=0)
        {
            if(reserve>=(8-c))
            {
                c=c+(8-c);
                reserve=reserve-(8-c);
        }
        }

        if(sum<k)
        {


        if(c>8)
        {
            reserve=(c-8)+reserve;
            sum+=8;

        }
        else
        {
            sum=sum+c;

            //if(c+reserve=<8)

        }

        }
        if(sum>=k)
        {
            day=i;
            break;
        }
         //cout<<"koro "<<sum<<endl;
         printf(" sum %d and reverse %d\n",sum,reserve);

    }
     cout<<"final "<<sum<<endl;
    if(day!=0)
    { printf("%d\n",day);
    return 0;
    }
    printf("-1\n");
    //return 0;
}

