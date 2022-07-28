#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
  char s1[129];
  int l=strlen(s1);
    //for (int ini=1;ini<=t;ini++)
    //{



    int countsnake=0;
    for (int i=0;i<l;i++)
    {
        cin>>s1[i];
        if(s1[i]=='s')
            countsnake++;


    }
    int count2=0;

    for (int i=1;i<=l-2;i++)
    {
        if (s1[i]=='m' &&(s1[i-1]=='s' || s1[i+1]=='s'))
            count2++;

    }
    if(countsnake>count2)
        printf("Snake\n");
    else if (countsnake==count2)
        printf("Tie\n");
        else
        cout<<"Moongoogse"<<endl;
}
//}
