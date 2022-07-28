#include<bits/stdc++.h>
using namespace std;
#define N 100010
int par[N];
int rank_it[N];
void make_set(int n,int ar[])
{
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
        par[ar[i]]=ar[i];
        rank_it[i]=0;
    }
    //cout<<"prothome "<<n<<endl;
}

    // discount=discount-1;
     //cout<<"ekhon "<<discount<<endl;


int binarySearch (int a[],int start,int end,int key)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main()
{



//char s[3];
//int rank_it[N];
    int n,a,b;
    cin>>n>>a>>b;
    int ar[n];

    make_set(n,ar);
    sort(ar,ar+n);
  //  for (int j=0;j<n;j++)
        //cout<<ar[j]<<endl;
    bool fact=true;
    for (int i=0;i<n;i++)
    {
        if(binarySearch(ar,ar[0],ar[n-1],a-ar[i])==-1)
        {
            //printf("for %dth\n",i);
           if(binarySearch(ar,ar[0],ar[n-1],b-ar[i])==-1)
            {
                //printf("for for %dth\n",i);
                //fact=false;
                printf("NO\n");
                return 0;
            }
            else
            {
              //  joint(ar[i],b-ar[i]);
                printf("1 1 ");
            }
        }
        else
        {
            //joint(ar[i],a-ar[i]);
            printf("0 0 ");
        }
    }
    cout<<endl;
}
