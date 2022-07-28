#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    vector<int> v;
    for (int i=0;i<5;i++)
    {
        int t;
        cin>>t;
        v.push_back(t);

    }
    v.pop_back();
    vector<int>:: iterator it;

    it=v.begin();
    while(it!=v.end())
    {
        cout<<*it<<endl;
        it++;
    }

}
