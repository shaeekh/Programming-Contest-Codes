#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
   while(cin>>r)
   {
       int l=4*r;
       int d=2*r;
       //double diagonal=sqrt((l*l)+(d*d));
       double result=(.5*l*d)-(2*acos(0.0)*r*r);
       //printf("%.6lf\n",result);
       double bakatriangle=(r*r)-(.25 *2*acos(0.0)*r*r);
       double faltutriangle=((r*r)*sin(2*acos(0.0)*-2*atan(.5)))/2;
       double kola=((r*r)*2*acos(0.0)*-2*atan(.5))/2;
       double chada=kola-faltutriangle;
       double ashol=(.5*2*r*r)-bakatriangle-chada;
       printf("%.6lf\n",result-ashol);


   }

}
