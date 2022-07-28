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

 //  return -1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }



    for (int i=0;i<m;i++)
    {       int l,r,x;
         int te,found;
        int b[n];
        for (int i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        cin>>l>>r>>x;

        //l=l-1;
          //cout<<"l e "<<l<<" " <<b[l]<<endl;

        //cout<<" l hocche" <<l<<endl;

        //r=r-1;
    //    cout<<r<<endl;
    for (int i=0;i<n;i++)
    {
        if(b[i]==x)
            te=i;
    }


   //cout<<"te holo " << te<<" te   te ase"<<a[te]<< endl;
     sort(a+l,a+r);

       found=binarySearch(b,0,n-1,x);
     //cout<<"found holo "<< found<<" found  te ase  "<<a[found]<<endl;
    if(found==te)
        printf("Yes\n");
    else
        printf("No\n");
    }
}
