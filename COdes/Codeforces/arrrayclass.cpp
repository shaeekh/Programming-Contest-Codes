#include <iostream>
#include <array>
#include <string>
using namespace std;
int main()
{
    array <string,5>coll={"hello","world","gu","kha"};
    for (int i=0;i<coll.size();i++)
    {
        cout<<i<<":"<<coll[i]<<endl;
    }
}
