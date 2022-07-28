#include<bits/stdc++.h>
using namespace std;
int age[110];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    printf("Where do you want to insert\n");
    int pos;
    cin>>pos;
    int val;
    cin>>val;
    for (int j=n-1;j>=pos-1;j--)
        a[j+1]=a[j];
        a[pos-1]=val;

       for (int c = 0; c <= n; c++)
      printf("%d\n", a[c]);

}
