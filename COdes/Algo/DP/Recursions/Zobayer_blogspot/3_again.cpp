
#include<bits/stdc++.h>
using namespace std;
//int a[34];
void rec(int i,int j,int *n,int a[])

{
    //cout<<n<<endl;
    if(i==*n)
        {
           // cout<<i<<endl;
            *n=j-1;
           // cout<<j<<endl;
        return ;
        }
    //resizing n;
    if(a[i]%2==0)
        {a[j]=a[i];
    j++;
        }
    rec(i+1,j,n,a);






}
int main()
{
    int n;
    cin>>n;
    int a[64];
   // int a[n];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //int i=1;
   // rec(n,i,a);

    rec(1,1,&n,a);
      for (int i=1;i<=n;i++)
    {
        cout<<"members "<< a[i]<<endl;
    }
}

