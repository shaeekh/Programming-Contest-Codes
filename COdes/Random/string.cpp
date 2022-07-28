#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string  st1 = "thisisstring";
    string  st2 = "str";
    if (strstr(st1, st2) == NULL)
        printf("%s not in %s", st2, st1);
    else
        printf("%s", strstr(st1, st2));
    return 0;
}

