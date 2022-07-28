#include<bits/stdc++.h>
using namespace std;

int main()
{
    int co=1;
      int n,p;
    while(cin >> n >>p)
    {

        int curreq;
        int req;
      //  cout<<"curreq and req "<<curreq<<" "<<req<<endl;


        double price=100000,currprice;
        string proposal,curpropsal;

        if(n==0 && p==0)
            break;
        for(int i=0; i<n; i++)
        {
            string s1;
            cin.ignore();
            getline(cin,s1);
            cout<<s1<<endl;
        }
        //cout <<"DPME" <<endl;
        for(int i=0; i<p; i++)
        {
            string s2;
            getline(cin,curpropsal);
            cin >> currprice >>curreq;

            if(curreq>req)
            {
                req=curreq;
                proposal=curpropsal;
            }
            else if(curreq==req && currprice<price)
            {
                req=curreq;
                proposal=curpropsal;
                price=currprice;
            }
            for(int jk=0; jk<curreq; jk++)
            {
                getline(cin,s2);

            }

        }
       cout << "KII" <<endl;
    }
}
