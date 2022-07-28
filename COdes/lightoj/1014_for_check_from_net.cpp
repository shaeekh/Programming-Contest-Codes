
#include <bits/stdc++.h>
using namespace std;
void show(int q,int l)

{


        if (q-l<=l)
            printf(" impossible");
            else
            {
                vector <long long int> ans;

                for (int i=1;i<=sqrt(q-l);i++)
            {
                if (i==sqrt(q-l))
                    //cout<<i<<endl;
                    ans.push_back(i);
                 else if ((q-l)%i==0)
                {
                    ans.push_back(i);
                    ans.push_back((q-l)/i);
                }

            }
            sort(ans.begin(),ans.end());
            //show(ans);

            for (int i=0;i<ans.size();i++)
            {
                if (ans[i]>l)
                    printf(" %d", ans[i]);
            }


    }
}

int main()
{
     long long int t;
    cin>>t;
    long long int q,l;

    for(int i=1;i<=t;i++)
    {
        //long long int q,l;
        cin>>q>>l;
        printf("Case %d:", i);
        show(q,l);
        printf("\n");
    }
}
