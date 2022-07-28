#include<bits/stdc++.h>
using namespace std;

void selection_sort(int ar[],int n)
{
    int temp;
    for (int j=n;j>=2;j--)
    {
        temp=1;
        for (int k=2;k<=j;k++)
        {
            if(ar[temp]<ar[k])
                temp=k;
        }
        swap(ar[j],ar[temp]);
        printf("Ekta step er por\n");
    for (int i=1;i<=n;i++)
    {
        cout<<ar[i]<<endl;
    }
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];

     printf("Randomly taken values are-\n");
    for (int i=1;i<=n;i++)
    {
        a[i]=rand()%10;
            cout<<a[i]<<endl;

    }
    selection_sort(a,n);
    printf("After being sorted:\n");
    for (int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }

}


