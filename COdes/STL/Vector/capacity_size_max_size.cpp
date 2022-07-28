#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<float>array;
    array.push_back(100);
    for (int i=1;i<4;i++)
    {
        array.push_back(i*4);
    }

   cout<<array.capacity()<<endl;
   cout<<array.size()<<endl;
   cout<<array.max_size()<<endl;
}
