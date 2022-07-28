#include<bits/stdc++.h>
using namespace std;
int count1=0;
void hanoi(int n,char start,char end,char middle)
{

    if(n==1)
      {
          printf("Move top disk  from %c to %c\n",start,end);
          //printf("1 is called\n");
          count1++;
          cout<<count1<<endl;
      }
    else
    {

      //  printf("top move er age\n");
        hanoi(n-1,start,middle,end);
        hanoi(1,start,end,middle);
        //printf("1 holo\n");
        hanoi(n-1,middle,end,start);
    }

}
int main()
{
    int disk;
    cin>>disk;
    hanoi(disk,'A','C','B');
}
