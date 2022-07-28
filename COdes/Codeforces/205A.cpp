#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int cou=0;
    int min_index=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d", &ara[i]);
    }
   int mini=ara[0];
   for (int i=1;i<n;i++)
   {
       if (ara[i]<mini)
       {
           mini=ara[i];
           min_index=i;
       }

  }
  sort(ara,ara+n);
  if (ara[0]==ara[1])
  {
      cout<<"Still Rozdil"<<endl;
  }
  else
    cout<<min_index+1<<endl;
}
