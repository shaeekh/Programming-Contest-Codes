#include <stdio.h>

int main() {
  int n;
 while(scanf("%d", &n)!=0)
       {


  for (int i = 0; i < n; i++) {
    if (i % 4 < 2) {
      printf("a");
    } else {
      printf("b");
    }
  }
  printf("\n");
 // return 0;
}
}
