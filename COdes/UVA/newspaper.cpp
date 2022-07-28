#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int t;

    int n;
    char one;
    double two;

    int M;
    cin>>t;
    map<char,double> m;
        map<char,double>:: iterator it;
    for (int i=1;i<=t;i++)
    {
        double total=0;

        cin>>n;
        for (int p=0;p<n;p++)
        {
            cin>>one>>two;
            m[one]=two;

        }
        cin>>M;
        cin.ignore();
        for (int j=0;j<M;j++ )
        {
            string line;
            getline(cin,line);
            int l=line.size();
            for (int k=0;k<l;k++)
            {
                it=m.find(line[k]);

                if(it!=m.end())
                    total=total+it->second;
            }

        }
        total=total/100;
        printf("%0.2lf$\n",total);
    //    m.clear();

    }
}

