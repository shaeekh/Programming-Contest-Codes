#include<bits/stdc++.h>
using namespace std;
int main()
{
char s1[110];
scanf("%s",s1);
int sum=0;
int a=97;
for (int i=0;i<strlen(s1);i++)
{
    //cout<<sum<<endl;

    sum+=min(   abs(a-s1[i]),(26-abs(a-s1[i])));
    a=s1[i]-0;
    continue;
}
cout<<sum<<endl;
}
