#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    for (int i=0;i<5;i++)
    {
        int t;
        cin>>t;
        s.push(t);

    }
    cout<<s.top()<<endl;
     s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

}
