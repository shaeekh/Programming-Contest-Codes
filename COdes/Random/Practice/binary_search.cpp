#include<bits/stdc++.h>
using namespace std;
int bin(int a[],int p,int l,int num)
{
    if (p<=l)
    {
        int mid=p+(l-1)/2;
        if(a[mid]==num)
            return mid;
        if(a[mid]>num)
            return bin(a,p,mid-1,num);
        else
        {
            return bin(a,mid+1,l,num);

        }

    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    printf("which number you're looking for\n");
    int num;
    cin>>num;
    int found=bin(a,0,n-1,num);
    printf("it is at %d\n",found+1);
}
