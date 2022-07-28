#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int> l(n);
    for (int i=1;i<=n;i++)
    {
            push(i);

    }
    int a[n];
    for (int i=1;i<=n;i++)
    {
        while(l.size()!=1)
        a[i]=pop_front();
        pop_front();

    }
    int p=pop_front();
    for (int i=0; ;i++)
        cout<<a[i]<<endl;
}
