#include<bits/stdc++.h>
using namespace std;
#define N 50004
int par[N];
//char s[3];
int rank_it[N];
int discount;
void make_set(int n)
{
    for (int i=0;i<=n;i++)
    {
        par[i]=i;
       rank_it[i]=1;
    }
    discount=n;
    //cout<<"prothome "<<n<<endl;
}
int find_it(int x)
{
    if(par[x]==x)
        return par[x];
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
    //if(now)
      //  printf("same set\n");
    if(!now)
    {
    if(rank_it[X]>rank_it[Y])
    {
        par[Y]=X;
        rank_it[X]+=rank_it[Y];
         //printf("x er ");

        //cout<<"holo "<<rank_it[x]<<endl;
   }
   else
       {
           par[X]=Y;
           rank_it[Y]+=rank_it[X];
          //  printf("y er ");

         //cout<<"holo "<<rank_it[y]<<endl;
       }
  //  if(rank_it[X]==rank_it[Y])
   //{
     // rank_it[X]=rank_it[X]+1;
      //cout<<rank_it[X];
    //}

     discount=discount-1;
     //cout<<"ekhon "<<discount<<endl;
}
}

int main()
{
    //int t;
    //cin>>t;

    //bool blank = false;
    //cout<<endl;
    //getchar();
     int n,m;
     int casee=0;

    while( cin>>n>>m)
    {
        if(n==0)
            break;
    memset(par,0,sizeof(par));
    memset(rank_it,0,sizeof(rank_it));
       // char c=getchar();


       // getchar();
        make_set(n);
      //  int n=(c-'A'+1);
       // char a,b;

         while( m--)
            {
                int p1,p2;
                cin>>p1>>p2;
                joint(p1,p2);

            }
      //  if(blank)
         //   cout<<endl;
      //  blank = true;

       //cout<<discount<<endl;
    //   int maxi=0;
       //for (int k=1;k<=n;k++)

     //{
        // maxi=max(maxi,rank_it[k]);
    //}
        //maxi=rank_it[i];


   printf("Case %d: %d\n",++casee,discount);

    }
}
