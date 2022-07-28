#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool q[100];
int a , s ;
string d ;
	cin >> a >> d;
	for ( int i = 0 ; i < a ; i ++ )
	{
		d[i] = toupper( d[ i ] ) ;
		s = int( d[ i ] ) ;
		//cout<<s<<endl;

		q[ s-65 ] = 1 ;
		//cout<<"Member  " <<q[s-65]<<endl;
		//cout<<s-65<<endl;
	}
	for ( int i = 0 ; i < 26 ; i ++ )
	{
		if( q[ i ] == 0 ){
			cout << "NO" ;
			return 0;
		}
	}
	cout << "YES" ;
}
