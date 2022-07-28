#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,b;
    cin>>a>>b;
    //printf("%d %d %d %d\n",a,b,c,d);
    unsigned long long int n;
    cin>>n;
    if(n%2==0)
    {
        printf("undefined\n");
        return 0;
    }
    unsigned long long int  start,finish,start2,finish2;
    char a1[4]={'^','>','v','<'};
    //char a2[4]={'^','<','v','>'};
    for (int i=0;i<4;i++)
    {
        if(a1[i]==a)
            {
                start=i;

            // V    if()
            }
        else if (a1[i]==b)
        finish=i;
    }


    //start=1;
    //start2=1;
 n=n%4;
   if((start+n)%4==finish)
    cout<<"cw"<<endl;
   else
    cout<<"ccw"<<endl;
}

