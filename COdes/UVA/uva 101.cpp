#include<bits/stdc++.h>
using namespace std;
vector<int> v[40];
int n;
void find_position(int key,int &f,int &l)
{
    for (f=0;f<n;f++)
    {
        for (l=0;l<v[f].size();l++)
        {
            if(v[f][l]==key)
                return;
        }
    }
}
void clear_(int f,int l)
{
    for (int i=l+1;i<v[f].size();i++)
    {
        int b=v[f][i];
        v[b].push_back(b);
    }
    v[f].resize(l+1);
}
void pile_on(int fa,int la,int fb)
{
    for (int i=la;i<v[fa].size();i++)
    {
        v[fb].push_back(v[fa][i]);
    }
     v[fa].resize(la);
}
void print()
{
    for (int i=0;i<n;i++)
    {
        cout<<i<<":";
        for (int k=0;k<v[i].size();k++)
        {
            cout<<" "<<v[i][k];
        }
        cout<<endl;
    }
}
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        v[i].push_back(i);
    }
   // cin>>n;
    int one,two;
    string s1,s2;

    //printf("For %dth\n");
    while(cin>>s1)
    {
          int fa,la,fb,lb;
        //printf("For th\n");
        int coo=1;
        if(s1=="quit")
            break;
        cin>>one;
        //cin>>two;
        cin>>s2;
        cin>>two;
        find_position(one,fa,la);
        find_position(two,fb,lb);
        if(fa==fb)
            continue;
        if(s1=="move")
            clear_(fa,la);
        if(s2=="onto")

            clear_(fb,lb);

            pile_on(fa,la,fb);
            //printf("For %dth\n");
    }
            print();


    //print();
    }


