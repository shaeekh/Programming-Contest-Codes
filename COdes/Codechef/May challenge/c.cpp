#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        vector<int> motu;
        vector<int> tomu;

        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0)
                motu.push_back(a[i]);
            else if(i%2==1)
                tomu.push_back(a[i]);
        }
    sort(motu.begin(),motu.end());

    sort(tomu.begin(),tomu.end());
    reverse(motu.begin(),motu.end());
  /* cout<<"motu elements ";
    for (int i=0;i<motu.size();i++)
        cout<<motu[i]<<" ";
        cout<<endl;
        cout<<"tomu elements ";
    for (int i=0;i<tomu.size();i++)
        cout<<tomu[i]<<" ";
        cout<<endl;
        */
    //s int len=max(motu.size(),tomu,size());

    int sw=0;
   // bool get;

    int len=motu.size();
    int len2=tomu.size();
        int sum1=0,sum2=0;
      for (int i=0;i<len;i++)
        sum1+=motu[i];

     for (int i=0;i<len2;i++)
        sum2+=tomu[i];
        int lenf=min(len,len2);



    for (int i=0;i<lenf && k>0;i++)
    {

               if(motu[i]>tomu[i])
            {
              //  printf("swapped elements %d %d\n",motu[i],tomu[j]);
                sw=sw+1;
            //    cout<<"sw is "<<sw<<endl;


                sum1=sum1-motu[i];
                sum1=sum1+tomu[i];
                sum2=sum2+motu[i];
                sum2=sum2-tomu[i];
                if(sw==k || sum2>sum1)
                    {

                        break;
                    }






           }


    }





    if(sum2>sum1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

     /*   cout<<"motu elements ";
    for (int i=0;i<motu.size();i++)
        cout<<motu[i]<<" ";
        cout<<endl;
        cout<<"tomu elements ";
    for (int i=0;i<tomu.size();i++)
        cout<<tomu[i]<<" ";
        cout<<endl;
        */



  }
    }
