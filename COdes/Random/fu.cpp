#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = (l + r)/2;

        if (arr[mid] == x)  return mid;


        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);


        return binarySearch(arr, mid+1, r, x);
   }

   return -1;
}

int main(void)
{
    int n;
    cin>>n;
    int ar[n];
    for (int i=1;i<=n;i++)
    {
        ar[i]=rand()%10;
        //cout<<ar[i]<<endl;
    }
    sort(ar,ar+n);
    for (int i=1;i<=n;i++)
    {
        cout<<ar[i]<<endl;
    }

    int x;
    printf("Enter the number you want to search\n");
    cin>>x;
   int result = binarySearch(ar, 1, n, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
}
