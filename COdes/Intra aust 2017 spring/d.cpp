#include<bits/stdc++.h>
using namespace std;

long binary(long n) {
    int rem;
    long bi=0,i = 1;

    while(n != 0) {
        rem=n%2;
        n=n/2;
        bi= bi + (rem*i);
        i = i*10;
    }
    return bi;
}

int main()
{
    //ector<int> v;
    int t;

    scanf("%d",&t);
    long long int n;
    for (int i=1;i<=t;i++)
    {
int total=0;


        scanf("%lld",&n);
        for (int i=1;i<=n;i++)
        {


        int count1=0;


        long b=binary(i);

string R;

ostringstream convert;

convert << b;

R = convert.str();
//int count1=0;
cout <<R;
cout <<"size" <<R.size();
for (int i=0;i<R.size();i++)
{


        if(R[i]=='1')
            count1++;
        total=total+count1;
    cout<< "total " <<total <<endl;
    cout <<count1<<endl;

}
   //     printf("%d\n",total);


    }
    printf("%d\n",total);
}

}
