#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=1;i<=t;i++)
    {
        stack<int> stac;
        //vector<queue<int>> queu;
        int firstv;
        int n,s,q;
        cin>>n>>s>>q;
        int ar[n][q]={0};
        for (int j=0;j<n;j++)
        {

            cin>>firstv;
            for (int k=0;k<firstv;k++)
                cin>>ar[j][k];

        }
        int time;
        for (int j=0;j<n;j++)
        {

            if(stac.size()<2)
            {
                for (int k=0;k<firstv;k++)
            {


            }
            }


            bool array_is_empty = true;
            for(int ari=0; ari<n; ari++)
            {
                for(int arj=0; arj<q; arj++)
                {
                    if(ar[ari][arj]!=0)
                    {
                        array_is_empty = false;
                        break;
                    }
                }
            }
            if (array_is_empty)
                break;
            time+=2;
            if(j==n-1)
                j=0;
        }

       /* for (int po=0;po<n;po++)
        {
            printf("n: %d  ",po);
            for (int sec=0;sec<q;sec++)
                cout<<"value: "<<ar[po][sec]<<endl;
        }
        */


    }
}

