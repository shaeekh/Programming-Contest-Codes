#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;
int main()
{
    list<int> lis;
    list<int>::iterator it;
    for (int i=0;i<7;i++)
    {
        if (i<4)
            lis.push_back(i);
        else
            lis.push_front(i);
    }
    lis.reverse();
    for (it=lis.begin();it!=lis.end();it++)
    {
        cout<<*it<<endl;
    }

     return 0;
}
