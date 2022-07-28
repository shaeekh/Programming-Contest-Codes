#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int res = 0;
        for (int i=1;i<=m;i++)
        {
            int a[n];
            int b;
            cin>>b;
            int sum = 0;
            bool jitse = false;
            for(int j=0;j<n;j++ )
            {
                cin>>a[j];
                sum+=a[j];

            }
            if(sum<=b){
                jitse = true;
            }
            int taka[5];
            taka[0] = 10000;
            taka[1] = 1000;
            taka[2] = 100;
            taka[3] = 10;
            taka[4] = 1;
            //res = 0;
            for(int j=0; j<5; j++) {
                sum += abs(a[0]-taka[j]);
                cout<<"sum : "<<sum<<endl;
                int sum2 = sum;
                if(sum<=b){
                    if(jitse){
                        res+= abs(a[0]-taka[j]);
                    }
                    else{
                        res+=taka[j];
                    }

                }
                sum -= abs(a[0]-taka[j]);
                if(sum2<=b){
                    break;
                }
            }
        }
       // printf("for sum %d  ",sum);

        cout<<res<<endl;

    }

}
