#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    strcpy(str,"This is a line");
    puts(str);

    memset(str,'R',3);
    puts(str);
}
