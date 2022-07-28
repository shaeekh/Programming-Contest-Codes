#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    vector<int> vec;
    vector<int>::iterator ab;
    vector<double> vec1;
    vector<double>::iterator ab1;
    vector<char> vec2;
    vector<char>:: iterator ab3;
    for (int i=1;i<=5;i++)
    {
        vec.push_back(i);
    }
    //ab=vec.begin();
    //ab++;
    //cout<<*ab<<endl;
    for (ab=vec.begin();ab!=vec.end();ab++)
    {
        cout<<*ab<<endl;
    }

}
