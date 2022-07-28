#include<bits/stdc++.h>
using namespace std;
int maximum_subarray(int a[],int n)
{
    if(n==1)
	{
		return a[0];
	}
    int m=(n/2);
    int left_mss=maximum_subarray(a,m);
    int right_mss=maximum_subarray(a+m,n-m);
    int left_sum=INT_MIN;
    int right_sum=INT_MIN;
    int sum=0;
    //int ans;
    for (int i=m-1;i>=0;i--)
    {
        sum=sum+a[i];
        left_sum=max(sum,left_sum);
    }
    sum=0;
    for (int i=m;i<n;i++)
    {
        sum+=a[i];
        right_sum=max(sum,right_sum);
    }
    int cross=left_sum+right_sum;
    int answer=max(left_mss,right_mss);
    int abc=max(answer,cross);
    return abc;

}

int main()
{
  int n;
  while(cin>>n && n!=0)
    {
        int a[n];
        bool neg=true;
       for (int i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]>0)
            neg=false;
       }
       if(neg==true)
        printf("Losing streak.\n");
        else
        {


  int result=maximum_subarray(a,n);
  printf("The maximum winning streak is %d.\n",result );

        }
//        cout<<endl;

  //cout<<result<<endl;
}
}
