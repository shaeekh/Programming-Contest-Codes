#include <iostream>
#include<cstdio>
#include<set>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        scanf("%d",&n);
        int ans=0;
        for(int k=2;k<=sqrt(n);k++)
        {
            int count=0;
         if(n%k==0)
         {
             while(n%k==0)
             {
                 n/=k;
                 count++;
                 printf("%d %d\n", n , k);
             }
         }
         if(ans<count)
         ans=count;
   }
        if(n!=1)
        if(ans==0)
        ans=1;
        //cout<<(int)sqrt(50)<<endl;

        printf("%d\n",ans);
    }
	// your code goes here
	return 0;
}
