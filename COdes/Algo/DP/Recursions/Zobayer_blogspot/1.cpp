#include<bits/stdc++.h>
using namespace std;
int a[34];
void rec(int n,int i)
{
    if(i<n+1)
        //return ;


        {
           // printf("call er age\n");
           rec(n,i+1);
            printf("%d\n",a[i]);
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
