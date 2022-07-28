#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count1=0,count2=0;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==0)
            count1++;
        else
            count2++;
    }
    if(count1==0)
    {
        printf("-1\n");
        return 0;
    }
    if(count2<9)
    {
        printf("0\n");
        return 0;
    }
    count2=count2-(count2%9);
    int sum=0;
    int cur=0;
   for (int j=1;j<=count2;j++)
    {
        cout<<"5"<<endl;

    }
    for (int p=1;p<=count1;p++)
        cout<<"0"<<endl;
    //cout<<cur<<endl;
}



