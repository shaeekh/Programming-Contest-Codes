#include<bits/stdc++.h>
using namespace std;
int main()
{


set<int> s;
for (int i=1;i<=8;i++)
{
    s.insert(i*6);
}
 // ...
 if(s.find(42) != s.end()) {
      printf("42 presents in set");
 }
 else {
      // 42 not presents in set
 }
}
