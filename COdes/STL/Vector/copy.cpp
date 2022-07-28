#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v,cp;
    for (int i=0;i<7;i++)
    {
        v.push_back(i*2);
    }
    cp=v;
    for (int i=0;i<cp.size();i++)
        cout<<cp[i]<<endl;
    //cout<<cp[1]<<endl;
}
