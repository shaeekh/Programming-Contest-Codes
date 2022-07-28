#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[4];
    cin>>t;
    while(t--)
    {
        bool flag=true;



    map<int,int> mp;
    for (int i=0;i<4;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for (int i=0;i<4;i++)
        {
            if(mp[a[i]]!=2)
                flag=false;
            if(mp[a[i]]==4)
                flag=true;
            //printf("YES\n");

        }

        if(flag==true)
            printf("YES\n");
        else

            printf("NO\n");

    //sort(a,a+4);

}
}
