#include <iostream>
#include <algorithm
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    int r=min((n-a),b+1);
    cout<<r<<endl;
}
