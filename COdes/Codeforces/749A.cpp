#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n%2==0)
    {
        int p=n/2;
        cout<<p<<endl;
        for (int i=1;i<=p;i++)
        {
            if (i!=p)
            printf("2 ");
            else
                printf("2\n");
        }
    }
    else
      {
          int q=n/2;
          cout<<q<<endl;
          for (int i=1;i<=q;i++)
          {
              if (i!=q)
                printf("2 ");
              else
                printf("3\n");

          }
      }
}
