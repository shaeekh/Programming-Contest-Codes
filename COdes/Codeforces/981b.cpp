#include<bits/stdc++.h>
using namespace std;


unordered_map <long long int, long long int> mp;
struct time
{
   long long  int st;
    long long int et;
}c[100004];
bool cmp(struct time a,struct time b)
{
    if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et>b.et;


}
struct time2
{
    long long int st;
    long long int et;
}d[100004];
bool cmp2(struct time2 a,struct time2 b)
{
    if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et>b.et;


}
int main()
{


    int n;
    cin>>n;
     long long int ar[n];

    for (int i=0;i<n;i++)
    {
        cin>>c[i].st;


        cin>>c[i].et;
        ar[i]=c[i].st;
        mp[ar[i]]=c[i].et;
    }
        //sort(c,c+n,cmp);
    //    for (int i=0;i<n;i++)
    //{
      //  cout<<c[i].st<<" ";
        //cout<<c[i].et<<" ";
        //cout<<endl;
    //}
     int m;
    cin>>m;
    unordered_map<long long int,long long int> m2;
    for (int i=0;i<m;i++)
    {
        cin>>d[i].st;
        cin>>d[i].et;
        if(mp.find(d[i].st)!=mp.end())
        {
            int get=max(d[i].et,mp[d[i].st]);
            int huli=d[i].st;
            mp[huli]=get;
            m2[d[i].st]=5;

        }
        else
        {
            m2[d[i].st]=d[i].et;
        }
    }
        //sort(d,d+m,cmp2);ng
        long long int sum=0;

  for (unordered_map<long long int ,long long int>::iterator it=mp.begin(); it!=mp.end(); ++it)
     sum=sum+it->second;

  for (unordered_map<long long int ,long long int>::iterator it=m2.begin(); it!=m2.end(); ++it)
     {
         if(it->second==5)
         {

         }
         else

         sum=sum+it->second;
}
cout<<sum<<endl;
}

