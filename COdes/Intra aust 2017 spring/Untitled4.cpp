#include <iostream>
using namespace std;

main() {
   unsigned int a = 10;	  // 60 = 0011 1100
   unsigned int b = 12;	  // 13 = 0000 1101
   int c = 0;

  // c = a & b;             // 12 = 0000 1100
   //cout << "Line 1 - Value of c is : " << c << endl ;

   c = a | b;             // 61 = 0011 1101
   cout << "Line 2 - Value of c is: " << c << endl ;
}
