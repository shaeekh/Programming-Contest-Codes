#include<bits/stdc++.h>
using namespace std;
#define N 532
int par[N];
char s[3];
//int rank_it[N];
int discount;
void make_set(int n)
{
    for (int i=0;i<n;i++)
    {
        par[i]=i;
       // rank_it[i]=0;
    }
    discount=n;
    //cout<<"prothome "<<n<<endl;
}
int find_it(int x)
{
    if(par[x]==x)
        return x;
        //ba return par[x];
    else
    {
        par[x]=find_it(par[x]);
        return par[x];
    }

}
bool same_set(int x,int y)
{
    if(find_it(x)==find_it(y))
        return true;
        return false;
}
void joint(int x,int y)
{
    bool now=same_set(x,y);
    int X=find_it(x);
    int Y=find_it(y);
    if(!now)
    {
   // if(rank_it[X]>rank_it[Y])
   // {
  //      par[Y]=X;
   // }
   // else
        par[X]=Y;
   // if(rank_it[X]==rank_it[Y])
   // {
    //    rank_it[X]=rank_it[X]+1;
    //}

     discount=discount-1;
     //cout<<"ekhon "<<discount<<endl;
}
}
int main()
{
    int t;
    cin>>t;
    getchar();
    getchar();
   bool blank = false;
    //cout<<endl;
    //getchar();
    for (int i=1;i<=t;i++)
    {
        char c=getchar();
        getchar();
        make_set(c-'A'+1);
        int n=(c-'A'+1);
       // char a,b;

         while( gets(s)  && strlen(s) )
            {
                joint( s[0] - 'A' , s[1] - 'A' );
       // discount--;
        }
 if(blank)
          cout<<"eibar "<<endl;
          else
            cout<<"eibar na ";
     blank = true;

       cout<<discount<<endl;
       int maxi=0;
     //  for (int k=1;k<=n;k++)

       // {maxi=max(maxi,rank_it[k]);
        //}
        //maxi=rank_it[i];


 //   cout<<maxi<<endl;

    }
}
