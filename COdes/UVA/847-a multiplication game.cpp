#include<bits/stdc++.h>
using namespace std;
int n;
int can_win(int m)
{
    //printf("infinite \n");
    if(m>=n)
        return 0;
    if(can_win(m*2>=n) ||can_win(m*3>=n) ||can_win(m*4>=n) ||can_win(m*5>=n) ||can_win(m*6>=n) ||can_win(m*7>=n) ||can_win(m*8>=n) ||can_win(m*9>=n))
    return 1;
    return 0;

}
int main()
{
    int n;
   while( cin>>n)
   {
       int get=can_win(1);
       if(get==1)
        cout<<"Stan wins."<<endl;
       else
        cout<<"Ollie wins."<<endl;
   }

}
