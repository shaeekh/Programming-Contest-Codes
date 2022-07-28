#include<bits/stdc++.h>
using namespace std;
int main()
{
    int win;
    cin>>win;
    int d=3;
    int ch=3;
    while(d--)
    {
        int p;
        cin>>p;
        switch(p)
        {
        case win:
            printf("wins\n");
        default:
            printf("%d chances left\n"--ch);
        }
    }

}
