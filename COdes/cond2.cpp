#include<bits/stdc++.h>
using namespace std;
bool evendigit(long long int b )
{
    int cn=0;
    while(b!=0)
    {
        b=b/10;
        cn++;
    }
    if(cn%2==0)
        return true;
    else if(cn%2!=0)
        return false;

}
long long int pali(long long int m)
{

    long long int a=m;
    long long int b=m;
    while(a>0)
    {
        b=(b*10)+(a%10);
        a/=10;
    }
    if(evendigit(b))
    {
        return b;
    }
    else
        return -1;
}

int main()
{
    long long int q,n;
    cin>>q>>n;
    long long int sum=0;
    long long int con=0;
    int i=1;
    while(1)
    {
     //   printf("dhukse\n");

        long long int num=pali(i);

        if(num!=-1)
        {



//
            //cout<<"sum "<<sum<<" num "<<num<<endl;
        sum=sum+num;
    //    cout<<sum<<endl;
        con++;
        if(con==q)
            {
      //          printf("2nd loop e \n");
                break;

        }

 i++;
    }
    }
  //  cout<<sum<<endl;
    cout<<sum%n<<endl;

}
