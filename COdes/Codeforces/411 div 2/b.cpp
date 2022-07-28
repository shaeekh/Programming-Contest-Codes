#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n==2)
        printf("aa\n");
     else if(n==1)
        printf("a\n");
        else if(n==3)
        printf("baa\n");
        //string res="bba";
        //int len=res.size();
        else
        {
            for (int i=0;i<n;i++)
            {
                if (i%4<2)
                    printf("b");
                else
                    printf("a");
            }
            printf("\n");
        }
}

