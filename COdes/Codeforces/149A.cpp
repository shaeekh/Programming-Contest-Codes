#include <bits/stdc++.h>
using namespace std;
int ret(int a,int b)
{
    return a>b;
}

int main()

{


    int k;
    cin>>k;
    if (k==0)
        cout<<"0"<<endl;
    else
    {


    int a[12];
    for (int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12,ret);
    //cout<<a[0];
    int count=0;
    int flag=0;
    int sum=0;
    for (int i=0;i<12;i++)
    {
        sum=sum+a[i];
        count++;
        if (sum>=k)
            {
                flag=1;
                break;
            }

    }
    if (flag==0)
        cout<<"-1"<<endl;
    else
    cout<<count<<endl;
}

}
