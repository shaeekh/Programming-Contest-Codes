#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    queue <int> p;
    for (int i=1;i<=5;i++)
    {
        p.push(i);
    }
    while(!p.empty())
    {
        cout<<p.front()<<endl;
        p.pop();
    }

}
