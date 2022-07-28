#include<bits/stdc++.h>

using namespace std;

/*======================================= Macro Start====================================================*/

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

/*======================================= Macro End====================================================*/

/*====================================== CONSTANT Start===================================================*/

#define INF (1<<30) //infinity value
#define EPS 1e-9
#define MOD 10007
#define SIZ 1005

/*====================================== CONSTANT End===================================================*/


int main()
{
   ios_base::sync_with_stdio(0);

   // input;
   int tc,cn,mod;
   int n;
   vector<int>vec;

   cin>>tc;
   for(cn=1;cn<=tc;cn++)
   {
       vec.clear();

       cin>>n;

       while(n>=2) //convert binary. here, we will get reverse binary of n
       {
           mod = n%2;
           vec.push_back(mod);
           n=n/2;
       }
       vec.push_back(n);
       //for (int i=0;i<vec.size();i++)
        //cout<<vec[i];
       //cout<<endl;

       vec.push_back(0);
       //for (int i=0;i<vec.size();i++)
        //cout<<vec[i];
       //cout<<endl;
    //add an extra 0

       reverse(vec.begin(),vec.end()); // Actual Binary of n.
     //   for (int i=0;i<vec.size();i++)
       // cout<<vec[i];
       //cout<<endl;


//       cout<<"After Reverse : "<<endl;
//       for(int i=0;i<vec.size();i++)
//        cout<<vec[i]<<" ";
//
       next_permutation(vec.begin(),vec.end()); // Find next lexicographical permutation

//       cout<<"\nAfter next_permutation : "<<endl;
//        for(int i=0;i<vec.size();i++)
//            cout<<vec[i]<<" ";
//
//       cout<<"\nAfter Decimal : "<<endl;

       int sz= vec.size();
       int decimal=0;
       int exp=sz-1;
       for(int i=0;i<sz;i++) //Transform to decimal
       {
           int qq=vec[i];
           if(vec[i] != 0)
           {
               decimal += (int)pow(2,exp);

//               cout<<"i: "<<i<<" exp: "<<exp<<" Pow( "<<2<<","<<exp<<" )"<<pow(2,exp)<<" Decimal: "<<decimal<<" ";

           }
           exp--;
       }

       cout<<"Case "<<cn<<": "<<decimal<<endl;

   }

    return 0;
}
