#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   // char s1[110];
   string a,b,c;
   int d;

    for (int i=1;i<=t;i++)
    {
        scanf("%s%s%s%d",&a,&b,&c,&d);

       // getline(cin,s1);
        //getchar();
         //scanf("%d",&d);

        if(a[4]=='a')
        {
            printf("Shuvo nobo borsho ");

            printf("%d\n",d-650);

        }
        else
        {
            printf("Shuva naya barsha ");

            printf("%d\n",d+650);

        }
    }
}
