//Author : pakhandi
//
//UVA solution : Rails
using namespace std;

#include<bits/stdc++.h>

#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int

#define PB push_back
#define SZ size

int arr[1003];

int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1;
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
			break;
		while(1)
		{
			fl(i,0,1003)
				arr[i]=0;
			cin>>arr[0];
			if(arr[0]==0)
				break;
				cout<<"a[0] "<<arr[0]<<endl;
			fl(i,1,n)
				cin>>arr[i];
			//int ind=0;
			stack<int> st;
			int qop=1;

			fl(i,1,n+1)
			{
				st.push(i);
				cout<<"Now top of stack  "<<st.top()<<endl;


				while(!st.empty() && st.top()==arr[i-1])
				{
				    printf("%dth time\n",qop);
				    cout<<"prothome "<<st.top()<<" tarpore "<<arr[i-1]<<endl;
					//cout<<st.top();
					st.pop();
					//ind++;
					//if(ind==n)
						//break;
				}
				printf("shesh\n");
				qop++;
			}

			if(st.empty())
				cout<<"Yes";
			else
				cout<<"No";
			nline;
		}
		nline;
	}
	return 0;
}

