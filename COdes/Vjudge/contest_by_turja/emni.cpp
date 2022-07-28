#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long int n;
      cin>>n;
   // while(cin>>n)
    //{


     stack<int> s;
     if(n == 1)
    {

        printf("1\n");

        return 0;

    }

     else if(n == 0)
    {
        printf("10\n");
        return 0;
    }
    for(int i = 9;i >= 2;--i)
    {

        while(n % i == 0)
        {
            n /= i;
            s.push(i);
        }
    }
     if(n == 1)
    {
      while(!s.empty())
      {
          cout<<s.top();
          s.pop();
    }
        printf("\n");
    } else {
        printf("-1\n");
    //bool shesh=false;




}
    }
