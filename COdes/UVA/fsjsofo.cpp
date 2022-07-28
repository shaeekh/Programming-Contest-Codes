#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        long long int num;
        cin>>num;
        for (int i=0;i<num;i++)
        {
            next_permutation(a.begin(),a.end());

        }
        cout<<a<<endl;
    }
}
