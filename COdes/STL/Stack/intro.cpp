#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    for (int i=0;i<5;i++)
    {
        s.push(i);

    }
    cout<<"size "<<s.size()<<endl;
    /*down here is popping,
    to print out elements comment out pop part
*/
for (int i=0;i<2;i++)
{
    s.pop();
}

/*down here is printing*/
for (int i=0;i<5;i++)
{
    cout<<s.top();
    s.pop();
}

}

