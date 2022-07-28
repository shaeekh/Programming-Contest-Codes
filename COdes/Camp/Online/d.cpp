#include<bits/stdc++.h>
using namespace std;

int findprime(int n)
{
    int i;
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    int a,b;
  cin>>a>>b;

    for (int i=a+1;i<=b;i++)
    {
        if (findprime(i))
        {
            if (i==b)
            {


                printf("YES\n");
                return 0;
            }
                else{
                    printf("NO\n");
                    return 0;
                }

    }
    }
    printf("NO\n");
    return 0;
}
