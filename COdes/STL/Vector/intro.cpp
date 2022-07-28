#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<int>array;
    array.push_back(100);
    for (int i=1;i<4;i++)
    {
        array.push_back(i*4);
    }

    for (int i=0;i<array.size();i++)
    {
        cout<<array[i]<<endl;
    }
}
