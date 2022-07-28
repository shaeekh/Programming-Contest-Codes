#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=5;
    int *px=&t;
 px=(int*) malloc(sizeof(int));
 //*px=10;
 cout<<*px<<endl;
 cout<<&t;
   }
