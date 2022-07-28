#include<bits/stdc++.h>
using namespace std;


void sieve()
{
	int i,j;
	marked[1]=1;
	for(i=0;i<M;i+=2) marked[i]=1;
	marked[2]=0;
	prime.push_back(2);
	for(i=3;i*i<M;i+=2)
	{
		if(marked[i]==0)
		{
			for(j=i*i;j<M;j=j+i+i) marked[j]=1;
		}
	}
	for(i=3;i<M;i++) if(marked[i]==0) prime.push_back(i);
}
int main()
{
    seive();
    int
}
