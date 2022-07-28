#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    char s1[110];

    for (int i=1;i<=t;i++)
    {
    int count1=0;
    int count2=0;
    int count3=0;
    int flag=0;
        cin>>s1;
        int le=strlen(s1);
        if (le<5)
        {
            flag=1;
        }
        for (int j=0;j<le;j++)
        {
            if(s1[j]>=97 && s1[j]<=122)
                count1++;
            else if (s1[j]>=65 && s1[j]<=90)
            count2++;
            else if (s1[j]>=48 && s1[j]<=57)
                count3++;

        }

    if (count1==0 || count2==0 || count3==0 || flag==1)
    {

        printf("YuKK!!\n");

    }
    else

    printf("YaHoo!!\n");

    }
}


