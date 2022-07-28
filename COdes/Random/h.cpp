#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = (l + r)/2;

        if (arr[mid] == x)  return mid;


        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);


        return binarySearch(arr, mid+1, r, x);

   }

   return -1;
}
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int n,q;
        cin>>n>>q;

        int a[n];
        for (int j=1;j<=n;j++)
            cin>>a[j];
       // int a,b;
        for (int ind=1;ind<=q;ind++)
        {
            int ac,b;
            cin>>ac>>b;
            int f1=binarySearch(a,1,n,ac);
            int f2=binarySearch(a,1,n,b);
           // cout<<f1<<endl;
            //cout<<f2<<endl;
        }
    }
}
