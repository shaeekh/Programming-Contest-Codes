#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for (int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    int count=0;
    for (int i=0;i<3;i++)
    {
        if (a[i+1]==a[i])
            count++;
    }
    cout<<count<<endl;

}
