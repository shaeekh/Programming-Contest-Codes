
#include<bits/stdc++.h>


const int A = 9; // 1 <= a <= 9
const int B = 4000+1; // 0 <= b <= 4000

const int BASE  = 100000000; // 10^8

/** fill a look up table with sums of digits for a^b, result is lut[a-1][b].
*/
void fillLUT(int lut[A][B]) {
for (int a = 1; a <= A; a++) {
    int digits[4000] = { 1 }; // TODO way larger than necessary
    int len = 1;
    for (int b = 0; b < B; b++) {
    // Write previous digits-sum into lut
    int sum = 0;
    for (int i = 0; i < len; i++) {
        int d = digits[i];
        while (d > 0) {
        sum += d % 10;
        d /= 10;
        }
    }
    lut[a-1][b] = sum;
    // Calculate next sum
    int carry = 0;
    for(int i = 0; i < len; ++i) {
        int temp = digits[i] * a + carry;
        digits[i] = temp % BASE;
        carry = temp / BASE;
    }
    if (carry != 0) {
        digits[len++] = carry;
    }
    }
}
}



int main() {
// Build Lookup-table.
int lut[A][B];
fillLUT(lut);

// Read input
int test, a, b;
scanf("%d", &test);
for (int i = 0; i < test; i++) {
    scanf("%d %d", &a, &b);
    if (a < 1 || a > A) {
    printf("Invalid input a:%d (b: %d)\n", a, b);
    return 1;
    }
    if (b < 0 || b >= B) {
    printf("Invalid input b:%d (a: %d)\n", b, a);
    return 2;
    }
    //int sum = powerDigitSum(a, b);
    int sum = lut[a-1][b];
    printf("Case %d: %d\n", i, sum) ;
}

return 0;
}
