#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char s1[204];
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
         int sum=0,total=0,j;

        scanf("%s", s1);
       int l=strlen(s1);
        for (j=0;j<l;j++)
        {
            if (s1[j]=='O')
               {
                   sum=sum+1;
                 total=total+sum;


            }
           else
            {
                sum=0;

            }


}
   printf("%d\n", total);
//cout<<sum;



}

}
