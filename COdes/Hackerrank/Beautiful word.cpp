#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    char s1[110];
    scanf("%s", s1);
    int l=strlen(s1);
    for (int i=0;i<l-1;i++)
    {
        if (s1[i]==s1[i+1])
            {
                cout<<"No"<<endl;
                flag=1;
                break;
            }
        else if ((s1[i]=='a' || s1[i]=='e' || s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u' || s1[i]=='y')
        && (s1[i+1]=='a' || s1[i+1]=='e' || s1[i+1]=='i' ||s1[i+1]=='o' ||s1[i+1]=='u' || s1[i+1]=='y'))
       {

        cout<<"NO"<<endl;
        flag=1;
        break;
    }
    }
    if (flag==0)
        cout<<"Yes"<<endl;
}
