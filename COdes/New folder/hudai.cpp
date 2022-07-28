#include<bits/stdc++.h>
int N = 47;
int status[48];
// status[i] = 0, if i is prime
// status[i] = 1, if i is not a prime
int main() {
    int i, j;
    // initially we think that all are primes, so change the status
    for( i = 2; i <= N; i++ )
    status[i] = 0;

    for( i = 2; i <= N; i++ ) {
        if( status[i] == 0 ) {
            // so, i is a prime, so, discard all the multiples
            // j = 2 * i is the first multiple, then j += i, will find the
            // next multiple
            for( j = 2 * i; j <= N; j +=i)
                status[j] = 1; // status of the multiple is 1
        }
    }
    // print the primes
    for( i = 2; i <= N; i++ ) {
        if( status[i] == 0 ) {
            // so, i is prime
            printf("%d ", i);
        }
    }
    return 0;
}
