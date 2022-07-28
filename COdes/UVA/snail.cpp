#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,U,D,F;

    for (int i=1 ; ; i++)

    {
   // int H,U,D,F;
    cin>>H>>U>>D>>F;
    if (H==0)
        {return 0;}
    float currenth=0;
    float curu=U;
    int count=0;
    float f=(F/100.0)*U;
    while(true)
    {
        count++;
        currenth+=curu;
        if(currenth>H)
        {
            printf("success on day %d\n",count);
            break;
        }
        currenth-=D;
        if (currenth<0)
        {
            printf("failure on day %d\n",count);
            break;
        }
        curu-=f;
        if (curu<0)
        {
            curu=0;
        }



    }
    }
}







