#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int P[30001], R[30001];
void MakeInit(int N) {
	int i;
	for(i = 0; i <= N; i++)
		P[i] = i, R[i] = 1;
}
int FindP(int x) {
	if(P[x] != x)
		P[x] = FindP(P[x]);
	return P[x];
}
void Link(int x, int y) {
	if(R[x] > R[y])

		{
		    R[x] += R[y], P[y] = x;
		    printf("x er ");

        cout<<R[x]<<endl;
		}
	else
		{
		    R[y] += R[x], P[x] = y;
		    printf("y er ");
		     cout<<R[y]<<endl;
		}
}
void Union(int x, int y) {
	x = FindP(x), y = FindP(y);
	if(x != y)
		Link(x, y);
}
int main() {
	int T, N, M, i, x, y;
	scanf("%d", &T);
	while(T--) {

		scanf("%d %d", &N, &M);
		MakeInit(N);
		while(M--) {
			scanf("%d %d", &x, &y);
			Union(x, y);
		}
		int maxim = 0;
		for(i = 1; i <= N; i++)
			{
			    maxim = max(R[i],maxim);
			}
		printf("%d\n", maxim);
	}
    return 0;
}
//© 2017 GitHub, Inc.
