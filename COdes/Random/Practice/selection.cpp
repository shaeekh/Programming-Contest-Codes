#include<bits/stdc++.h>
using namespace std;
void select(int a[],int n)
{
    int temp;
    for (int i=n;i>=2;i--)
    {
        temp=1;
        for (int j=2;j<=i;j++)
        {
            if (a[j]>a[temp])
                temp=j;
        }
        swap(a[temp],a[i]);
    }
}
int main()
{
//8,4,5,2,9,1,0,10
  int n;
  cin>>n;
  int a[n];
  for (int i=1;i<=n;i++)
    cin>>a[i];
  select(a,n);
    for (int i=1;i<=n;i++)
        cout<<a[i]<<endl;

}
