#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m;
    char c;
    while(cin>>h>>c>>m)
    {
        if(h==0)
            break;
       // h=(h+(m/60))*30;
        cout<<h<<endl;
        m=m*6.0;
        double dif=fabs(h-m);
        if(dif>180)
            dif=360-dif;
        printf("%.3lf\n",dif);

    }
}
