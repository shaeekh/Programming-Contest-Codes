#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
  //  a=max(a,b);
   //b=min(a,b);
   double a1,b1;
    if(a==b)
    cout<<"="<<endl;
    //else if(b==0)
      //  cout<<"="<<endl;

    else
    {
        a1=b*log(a);
        b1=a*log(b);
        //if((a1-b1)<0.001)
          //  cout<<"="<<endl;
        if(a1>b1)
            cout<<">"<<endl;
        else if(a1<b1)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;



}
}

