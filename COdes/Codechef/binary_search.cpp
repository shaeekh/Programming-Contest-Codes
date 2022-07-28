#include<bits/stdc++.h>
using namespace std;
#define max 1e18
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    vector<long long int> v;
    v.clear();
    long long int num1=1;
    int n,m;
    v.push_back(1);
    cin>>n>>m;
    for (int i=1; ; i++)
    {
        num1*=m;
        //cout<<num1<<endl;
        if(num1>max  || num1<0)
            break;
        v.push_back(num1);

    }
  //  printf("dp");
    //int t;
    //cin>>t;
    //for (int i=1;i<=t;i++)
    //{

        //int a[n];
    //    printf("ashsi\n");
      long long   int c=0;
        for (int j=0;j<n;j++)
        {
         long long int num;
          cin>>num;
          if(binary_search(v.begin(),v.end(),num))
          c++;
        }
        cout<<c<<endl;
    }
}
