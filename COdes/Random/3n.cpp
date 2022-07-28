#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,big,count;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        printf("%d %d ",a,b);
        if (a>b)
            swap(a,b);
        big=0;

        for (int i=a;i<=b;i++)
        {
            count=1;
            for (int j=i;j!=1;j=j)
            {
                if (j%2==0)
                {
                    j=j/2;
                    count++;
                    continue;
                }
                if (j%2==1)
                {
                    j=(j*3)+1;
                    count++;
                    continue;
                }
            }
            if (count>=big)
                big=count;
        }
        printf("%d\n",big);

}

return 0;
}

