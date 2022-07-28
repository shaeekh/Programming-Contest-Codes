#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int gcd(int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> even;
        vector<int> odd;
        int n;
        cin>>n;
        v.clear();
        even.clear();
        odd.clear();
        int calc;
        for (int i=0;i<n;i++)
            {
                cin>>calc;
                v.push_back(calc);


                if(v[i]%2==0)
                    even.push_back(v[i]);
                else
                    odd.push_back(v[i]);
            }
            int co;
            int fin=0;
            if(odd.size()==0)
            {
                printf("-1\n");
                continue;
            }


            else
            {
                    bool fal=true;

                    for (int j=0;j<n;j++)
                    {

                        if(gcd(v[0],v[j])==1)
                           {
                               fal=false;
                               break;

                           }


                    }
                    if(fal==true)
                    {
                        printf("-1\n");
                        continue;
                    }


            }
           // for (int i=0;i<v.size();i++)
            //{
              //  for (int j=0;j<v.size();j++)
            //}

            int co1=0;
             for (int i=0;i<even.size();i++)
            {
                co1=0;

               for (int j=0;j<odd.size();j++)
               {
                   if(gcd(even[i],odd[j])==1)
                   {
                     //   cout<<even[i]<<" "<<odd[j]<<endl;
                       co1++;
                   }
                   if(j==odd.size() && co1==j)
                   {
                       fin=fin+1;


                   }
             }
            }
            if(fin==0)
                printf("0\n");
            else

                printf("%d\n",fin);

    }
}
