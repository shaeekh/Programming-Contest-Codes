#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    int c1=0,c2=0,c3=0,c4=0;
     cin>>n;
//int x;
    for (int i=0,x;i<n;i++)
    {
        cin>>x;
        if(x==1)c1++;
        else if (x==2) c2++;
        else if (x==3) c3++;
        else c4++;
    }
    int sum=0;
    sum=sum+c4;
    c4=0;
    sum=sum+(c2/2);

    c2=c2%2;
    if(c1>=c3)
      {

        sum=sum+c3;
        c1=c1-c3;
         c3=0;
        sum = sum + c1/4;
    //c3=0;
    c1=c1%4;

    if(c1+ c2*2<=4 && c1+ c2*2>0)
    {
        sum++;
        c1=0;
        c2=0;
    }
    else if (c1==3 && c2==1)
    {
        sum=sum+2;
        c1=0;
        c2=0;
    }
      }
  else if (c1<c3)
{
        sum = sum + c1;
        c3 = c3 - c1;
        c1 = 0;
        sum = sum + c3 + c2;
}

cout<<sum<<endl;
//sum=sum+2;
    }

