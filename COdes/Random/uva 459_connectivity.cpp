#include<bits/stdc++.h>
using namespace std;
#define N 532
int par[N];
char s[2];
int rank_it[N];
int discount;
void make_set(int n)
{
    for (int i=0;i<n;i++)
    {
        par[i]=i;
        rank_it[i]=0;
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
}
void joint(int x,int y)
{
    bool now=same_set(x,y);
    if(!now)
    {
    if(rank_it[x]>rank_it[y])
    {
        par[y]=x;
    }
    else
        par[x]=y;
    if(rank_it[x]==rank_it[y])
    {
        rank_it[x]=rank_it[x]+1;
    }

     discount=discount-1;
     //cout<<"ekhon "<<discount<<endl;
}
}
int main()
{
    int t;
    scanf("%d\n\n",&t);
    bool blank = false;
    //cout<<endl;
    //getchar();
   while(t--)
    {
        char c=getchar();
        getchar();
        make_set(c-'A'+1);
       // char a,b;

         while( gets(s)  && strlen(s) )
            {
                joint( s[0] - 'A' , s[1] - 'A' );
       // discount--;
        }
        if(blank)
            cout<<endl;
        blank = true;

       cout<<discount<<endl;

    }
}

