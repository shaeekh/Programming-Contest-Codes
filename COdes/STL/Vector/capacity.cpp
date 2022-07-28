#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<float>v1;
    v1.push_back(100);
    for (int i=1;i<4;i++)
    {
        v1.push_back(i*4);
    }

   cout<<v1.capacity()<<endl;
   cout<<v1.size()<<endl;
   cout<<v1.max_size()<<endl;
}
