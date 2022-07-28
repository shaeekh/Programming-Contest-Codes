#include<bits/stdc++.h>

using namespace std;

void A(int n, int pos){
    printf("sin(%d",pos);

    if(pos < n)
    {

        if(pos & 1)
           // printf("huhu");
           printf("-");
        else
         printf("+");

        A(n,pos + 1);
    }

    printf(")");
}

void S(int n, int pos){
    if(pos < n)
    {
        printf("(");
        S(n,pos + 1);
        printf(")");
    }

    A(n + 1 - pos,1);

    printf("+%d",pos);
}

int main()
{
    int N;
    while(cin>>N)
    {



    S(N,1);
}
}
