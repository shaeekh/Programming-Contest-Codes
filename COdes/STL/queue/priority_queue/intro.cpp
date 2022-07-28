#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    priority_queue <int> q;
    q.push(4);
    q.push(45333);
    q.push(3444);
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}
