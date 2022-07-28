#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count1=0;

        //int curd=25;
        int count2=0;

        int a[n];  cin>>a[0];
         if(a[0]!=1)
           count1=count1+(a[0]-1);
        for(int i=0;i<n-1;i++)
            {
                cin>>a[i];
        if(a[i]>25)
        {
            count2=count2+(a[i]-25);
            //curd=a[i];
        }
            }
        cout<<count2+count1<<endl;
    }
//    return 0;
