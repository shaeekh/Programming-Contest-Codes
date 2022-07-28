#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    queue <int> f,b;
    for (int i=1;i<=3;i++)
    {
        f.push(i);
    }
    for (int i=1;i<=7;i++)
    {
        b.push(i*2);
    }
    f.swap(b);
    cout<<f.size()<<endl;
    cout<<b.size()<<endl;
    cout<<f.front()<<endl;

    cout<<b.front<<endl;

}
