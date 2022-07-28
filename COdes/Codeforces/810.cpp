#include<bits/stdc++.h>
using namespace std;
int main()
{
    double k;
    double n;
    cin>>n>>k;
    int N=n;
    double a[N];
    double sum;
    for (int i=0;i<N;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
       // printf("loop er ager sum %d\n",sum);
        int count=0;
        double p=sum/n;
       // printf("loop er ager sum %lf\n",sum);
      //cout<<p<<endl;
        double t=(k-0.5);

        //cout<<t<<endl;
    for ( ; ;)
    {

        if (p>=t)
          {

            break;
          }
        else
    {
        n=n+1;
        sum=sum+k;
        cout<<n<<" ";
        p=((sum)/n);
       cout<<p<<endl;
        printf("sum is %d\n",sum);

        count++;
        if (count==5)
            break;
    }


    }
//cout<<count<<endl;

}

