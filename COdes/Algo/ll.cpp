#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> ma;
    //printf("Enter the map\n");

    for (int i=1;i<=10;i++)
    {
        printf("Enter the %dth song\n",i);
        string s;
        getline(cin,s);
            ma[i]=s;
            cout<<"The"<<" "<<i<<"th"<<"song is "<<s<<endl;


    }


}
