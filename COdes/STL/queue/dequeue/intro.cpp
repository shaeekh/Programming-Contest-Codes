#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
    int a[]={4,3,6,2};
    deque<int> dq(a,a+5);
    dq.push_back(10);
    dq.push_front(20);
    deque<int>::iterator it;

    it=dq.begin()+2;
    dq.insert(it,14);
    int a1[]= {6,6,6,6};
    dq.insert(dq.begin(),a1,a1+4);
    for (it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<endl;
    }

}
