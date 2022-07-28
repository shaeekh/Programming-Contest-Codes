#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    int count=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d %d", &a,&b);
        if (a==b)
            count++;

    }
    cout<<count<<endl;
}
