#include<bits/stdc++.h>
using namespace std;
//map<double,double> mp;
vector<double> cup;
void made()
{


for (int i=1;i<=1010;i++)
{
    double fee=i*i*i;
    cup.push_back(fee);
  //  mp[fee]=fee;
}
}
bool perfectsq(double n)
{
    double rt = sqrt(n);
    return ((rt - floor(rt)) == 0);
}
bool perfectcu(double n)
{
    //if(mp.find(fee))
    vector<double>::iterator it;
    it=find(cup.begin(),cup.end(),n);
    if(it!=cup.end())
        return true;
     else
        return false;

}
int main()
{
    made();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double n;
        scanf("%lf",&n);
        if(perfectsq(n) && perfectcu(n))
            cout<<"Both"<<endl;
        else if(perfectsq(n))
            cout<<"Perfect Square"<<endl;
        else if(perfectcu(n))
            cout<<"Perfect Cube"<<endl;
        else
            cout<<"None"<<endl;

    }
}
