#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int yel,blue;
    cin>>yel>>blue;
    long long int x,y,z;
    cin>>x>>y>>z;
    long long int lagbe=0;
    if(y<=yel || y<=blue)
    {


    if(y<=yel )
    {
        yel=yel-y;


    }
    if( y<=blue)
    {
        blue=blue-y;
    }
    }
    else if(y>yel || y>blue)
    {


     if(y>yel)
    {
        lagbe+=(y-yel);
        //cout<<"1"<<endl;
        yel=0;

    }
    if(y>blue)
    {
        lagbe+=(y-blue);
          //cout<<"2"<<endl;
        blue=0;
    }
    }

    if((x*2)==yel)

    {
        yel=0;

    }
    else  if((x*2)>yel)
    {
        //cout<<"x*2 "<<x*2<<endl;
        lagbe+=(x*2)-yel;
        yel=0;

          //cout<<"3"<<endl;

    }
    else  if((x*2)<yel)
    {
        yel=yel-(x*2);

    }

    if((z*3)==blue)

    {
        blue=0;

    }
    else  if((z*3)>blue)
    {

        lagbe+=(z*3)-blue;
         blue=0;
          //cout<<"4"<<endl;

    }
    else  if((z*3)<blue)
    {
        blue=blue-(z*3);

    }
    cout<<lagbe<<endl;

}
