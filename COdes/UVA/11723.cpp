#include<bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=1; ; i++)
    {


    int r,n;
    cin>>r>>n;
    if (r==0 || n==0)
        return 0;
        if (n>r)
            printf("Case %d: 0\n", i);

        else
        {if (r/n>26)
            printf("Case %d: impossible\n",i);
       else  if (r%n==0)
            printf("Case %d: %d\n", i, ((r/n)-1));
       else  if (r%n!=0)
          printf("Case %d: %d\n", i, (r/n));
        }
    }
}





