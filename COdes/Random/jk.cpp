#include<bits/stdc++.h>
using namespace std;
int main()
{
  priority_queue <int> q;
   int num;
   for (int i=1;i<=4;i++)
    {
        cin>>num;
        q.push(num);
    }
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}
