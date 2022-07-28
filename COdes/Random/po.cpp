#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int e=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(i>0&&a[i]!=a[i-1]) e=1;
	}
	if(e==0||n==1){
		cout << "YES" << endl;
		return 0;
	}
	int m=0;
	int f=-1;
	for(int i=1;i<n;i++){

		if(a[i-1]<a[i]) {
			if(f==0||f==1)m=1;
		}
		if(a[i-1]==a[i]){
			if(f==-1||f==0) f=0;
			else m=1;
		}
		if(a[i-1]>a[i]){
			if(f==0||f==1||f==-1) f=1;
		}
	}
	if(m==0) cout << "YES" << endl;
	else cout << "NO" << endl;

}
