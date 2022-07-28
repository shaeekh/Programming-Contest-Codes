#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {


    int a[n];
    int ans=0;
    for (int i=0;i<n;i++)
        cin>>a[i];
//        int ans=0:
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<i;j++)
            {
                if(a[j]>a[i])
                    ans++;


            }
        }
         printf("Minimum exchange operations : %d\n",ans);
}
}
