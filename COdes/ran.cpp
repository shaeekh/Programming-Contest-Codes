#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    int a[4];
    for (int i=0;i<4;i++)
        cin>>a[i];

    bool flag=true;

    for (int i=0;i<3;i++)
    {
        if(a[3]>2*a[i])
            flag=false;
    }
    if(!flag)
        printf("-1\n");
    else
    {
        //sort(a,a+4,comp);

        for (int i=0;i<3;i++)
        cout<<a[i]<<endl;
}
}
