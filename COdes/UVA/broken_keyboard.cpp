#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string line;
    while(getline(cin,line))
    {
        for (int i=0; ;i++)
            s.push(i);
    }
    while(!s.empty())
{
    char w = s.top();
    cout << w;
    s.pop();
}
}

