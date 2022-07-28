#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //int a[n];

   while(cin>>n)
   {
       int a[n];
       int a2[n];
       for (int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for (int i=1;i<n;i++)
       {
           a2[i]=abs(a[i]-a[i-1]);
       }
       sort(a2+1,a2+n);
       bool dr=true;
       for(int i = 1; i < n; i++){
            if(a2[i] != i){
                dr = false;
                break;
            }
        }
        if(dr)cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
   }
}
