#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[105];
    int b[105];
    gets(a);
    int l1=strlen(a);
    int l2=0,i,j=0;
    for ( i=0;i<l1;i++)
    {
        if (a[i]=='1' || a[i]=='2' || a[i]=='3')
        {


            int c = atoi(&a[i]);
            b[j]=c;
           // cout<<b[j]<<endl;
            j++;
            l2++;
        }

    }
    sort(b,b+l2);
    for (i=0;i<l2;i++)
    {
        cout <<b[i];
        if (i<l2-1)
            cout<<"+";

    }
    cout<<endl;

}
