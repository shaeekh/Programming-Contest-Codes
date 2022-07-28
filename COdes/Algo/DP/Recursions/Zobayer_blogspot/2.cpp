
#include<bits/stdc++.h>
using namespace std;
int a[34];
void rec(int n,int i)
{
    if(i<=n+1/2)
        //return ;


        {
           // printf("call er age\n");
             printf("%d %d\n",a[i],a[n]);
           rec(n-1,i+1);

        }




}
int main()
{
    int n;
    cin>>n;
   // int a[n];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int i=1;
    rec(n,i);
}
