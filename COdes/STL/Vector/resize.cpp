#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    //vector<vector<int> > v1;v
   // v.resize(5);
   for (int i=0;i<10;i++)
    {
        v.push_back(i);
    }
   v.resize(5);
   v.resize(8,100);
   v.resize(12);
  // v.resize(3);

    for (int i=0;i<v.size();i++)
    {
        cout<<' ' <<v[i];
    }

}
