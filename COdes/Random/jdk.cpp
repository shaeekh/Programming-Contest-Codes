#include<bits/stdc++.h>
using namespace std;


bool check(int year)
{
    // If a year is multiple of 400, then it is a leap year
    if (year%400 == 0)
        return true;

    // Else If a year is muliplt of 100, then it is not a
    // leap year
    if (year%100 == 0)
        return false;

    // Else If a year is muliplt of 4, then it is a leap year
    if (year%4 == 0)
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    int coo=0;
    while(t--)
    {
        string m;
        cin>>m;
        //getchar();
        getchar();
        //cout<<s;
        int date;
        cin>>date;
        char com;
        cin>>com;
        getchar();
        long long int year;
        cin>>year;
        getchar();
        string m1;
        cin>>m1;
        //getchar();
        getchar();
        //cout<<s;
        int date1;
        cin>>date1;
        char com1;
        cin>>com1;
        getchar();
        long long int year1;
        cin>>year1;
        getchar();
        //int sum=0;
       // long long int cu=0;
        if(m!="January" && m!= "February")
        {
            year++;
        }
        if(m1=="January" || (date1<29 && m1=="February") )
        {
            year1--;
        }
       // cout<<year<<" "<<year1<<endl;
        long long int v1=(year1/4)-((year-1)/4);
       // cout<<v1<<endl;
        long long int v2=(year1/100)-((year-1)/100);
        long long int v3=(year1/400)-((year-1)/400);
         // cout<<v1<<endl;
          //cout<<v2<<endl;
          //cout<<v3<<endl;
      // long long  int v2=(year1/100-(year-1)/100);
       //long long  int v3=(year1/400-(year-1)/400);
        //long long int v3=(year1-(year-1))/400;
       long long  int ans=(v1+v3)-v2;


       printf("Case %d: %lld\n",++coo,ans);
         }

    }




