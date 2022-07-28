#include <bits/stdc++.h>
#define MIN(a, b) a < b ? a:b
//#define MAX(a, b) a > b ? a:b
#define LOOP(a, b) for(a = 3; a * a <= b; a++)
#define LOOP2(a, b, c) for(a = b * b; a <= c; a += 2 * b)
#define ADD_FIVE(a) (a + 10)
#define MAX 100000000
#define LMT 10000

long long int N =10000,prime[100];
int flag[10000 >> 5];

#define primeCheck(a) (flag[a >> 5] & (1 << (a & 31)))
#define setnotPrime(a) (flag[a >> 5] |= (1 << (a & 31)))


void sieve()
{
     int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if(!primeCheck(i))
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 setnotPrime(j);
	 		 }
		 }
	 }
	 puts("2");
	 for(i=3;i<N;i+=2)
		 if(!primeCheck(i))
	 	 printf("%d\n",i);

}


int main()
{


	sieve();
	//cout << "Prime or not : " << ifc(11) << endl;
	//cout << "Prime or not : " << ifc(5) << endl;

	//cout << "MINIMUM: " << min << endl;
	//cout << "MAXIMUM: " << max << endl;





	return 0;
}
