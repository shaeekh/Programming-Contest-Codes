#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
printf("%d\n",(n*n/2));
   // char s1[104][104];
   for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if ((i+j)%2==0)
            printf("C");
            else
                printf(".");
               // cout<<endl;

            //   cout<<endl;
        }
        cout<<endl;
    }
}
