#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    map<char,int>  m;
    int k;
    for (int i=1;i<=t;i++)
    {
        cin>>k;
        m.clear();
        int p;
        char c;
        for (int j=1;j<=k;j++)
        {
            cin>>c;
            cin>>p;
            m[c]=p;
        }
        int count=0;
        int M;
        cin>>M;
        getchar();
    int le;
        for (int o=1;o<=M;o++)
        {
           unsigned char p;
           while((p=cin.get())!='\n')
           {
               count+=m[c];
           }
        }
           printf("%0.2f$\n", count/100.0);

    }
}
