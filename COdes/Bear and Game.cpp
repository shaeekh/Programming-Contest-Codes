#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int flag=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
        if (i==0 && ar[i]>15)
        {
            flag=1;
            printf("15\n");
            break;
        }
        else if ((ar[i]-ar[i-1]>15) && i!=0)
        {
            flag=1;
            int p=ar[i-1]+15;
            cout<<p<<endl;
            break;
        }
        else if (i==n-1 && ((90-(ar[i]))>15) )
        {
            flag=1;
            int p=ar[i]+15;
            cout<<p<<endl;
//3
        }

    }
    if (flag==0)
        cout<<90<<endl;

}
