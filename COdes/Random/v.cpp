// http://acm.timus.ru/problem.aspx?space=1&num=1319
// Runtime: 0.031s
// Tag: Adhoc


// @BEGIN_OF_SOURCE_CODE

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

using namespace std;

int main ()
{
    int n;
    int arr [100 + 5] [100 + 5];

    while ( scanf ("%d", &n) != EOF ) {
        int num = 1;

        for ( int i = n - 1; i >= 0; i-- ) {
            int r = 0, c = i;
            while ( r < n && c < n ) {
                arr [r] [c] = num++;
                cout<<r<<" "<<c<<"  "<<arr[r][c]<<endl;
                r++, c++;
            }
        }
printf("pore\n");
        for ( int i = 1; i < n; i++ ) {
            int r = i, c = 0;
            while ( r < n && c < n ) {
                arr [r] [c] = num++;
                   cout<<r<<" "<<c<<endl;
                r++, c++;
            }
        }

        for ( int i = 0; i < n; i++ ) {
            bool space = false;
            for ( int j = 0; j < n; j++ ) {
                if ( space ) printf (" "); space = true;
                printf ("%d", arr [i] [j]);
            }
            printf ("\n");
        }
    }

    return 0;
}

// @END_OF_SOURCE
