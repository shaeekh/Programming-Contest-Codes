#include <cstdio>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,n,a[1000];

    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);

        for(int i = 0;i < n;++i)
            scanf("%d",&a[i]);

        //cout<<"n is "<<n<<" and a[n] is "<<a[n]<<endl;

        a[n++] = 0;
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
             cout<<"n is "<<n<<" and a[n] is "<<a[n]<<endl;
             cout<<"n-1 is "<<n-1<<" and a"<<n-1<<" is "<<a[n-1]<<endl;

        sort(a,a + n);
         for (int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }

        int ans = 0;
       // cout<<"a[3] is "<<a[3]<<endl;

        for(int i = n - 2;i >= 0;i -= 2)
            {
                if(i==0 || i==-1)
                    cout<<"yes";
           //     if(i==n-2)
         //           cout<<"hmm "<<a[3]<<endl;
                cout<<"i is "<<i<<endl;
                cout<<"a[i] "<<a[i]<<" and a[i+1] "<<a[i+1]<<endl;
                ans ^= (a[i + 1] - a[i] - 1);
            }

        puts(ans == 0? "Bob will win" : "Georgia will win");
    }

    return 0;
}
