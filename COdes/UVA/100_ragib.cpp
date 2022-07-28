#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j,t,ma=0,total=0;
    while(scanf("%d %d",&i, &j)!=EOF)
    {


    if(i>j)
    {
        int temp =j;
        j=i;
        i=temp;
        printf("%d %d ",j ,i);
    }
    else
        printf("%d %d ",i,j);

    while(i<=j){
            t=i;
            total=1;
    while(t!=1){

         //cout << "\n" << t;
        if(t%2==0)
        {
            t=t/2;
            total++;

            continue;
        }
        else{
            t=3*t+1;
            total++;
            continue;
        }
    }
        if(total>ma)
        ma=total;
        i++;
    }
    cout << ma;
}
}
